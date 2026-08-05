#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3626AD8252BC4724.h"
#include "unitysdk/System/MulticastDelegate.h"

class Class_2_72BDD67FEA972F1C;
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define CLASS_3_19ADD749F6308C06_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1375EB80)
#define CLASS_3_19ADD749F6308C06_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1375EC00)
#define CLASS_3_19ADD749F6308C06_INVOKE_OFFSET UNITYSDK_OFFSET(0x1375E860)
#define CLASS_3_19ADD749F6308C06__CTOR_OFFSET UNITYSDK_OFFSET(0x1375E840)

inline static constexpr unsigned int Class_3_19ADD749F6308C06_TypeDefinitionIndex = 73285;

class Class_3_19ADD749F6308C06 : public ::System::MulticastDelegate
{
public:
	::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_3_19ADD749F6308C06__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Invoke(::Class_2_72BDD67FEA972F1C*& a1, ::Enum_3_3626AD8252BC4724& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_72BDD67FEA972F1C*&, ::Enum_3_3626AD8252BC4724&))((::PBYTE)hIl2Cpp + CLASS_3_19ADD749F6308C06_INVOKE_OFFSET))(this, a1, a2);
	}

	::System::IAsyncResult* BeginInvoke(::Class_2_72BDD67FEA972F1C*& a1, ::Enum_3_3626AD8252BC4724& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
	{
		return ((::System::IAsyncResult*(*)(::PVOID, ::Class_2_72BDD67FEA972F1C*&, ::Enum_3_3626AD8252BC4724&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_19ADD749F6308C06_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void EndInvoke(::Class_2_72BDD67FEA972F1C*& a1, ::Enum_3_3626AD8252BC4724& a2, ::System::IAsyncResult* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_72BDD67FEA972F1C*&, ::Enum_3_3626AD8252BC4724&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CLASS_3_19ADD749F6308C06_ENDINVOKE_OFFSET))(this, a1, a2, a3);
	}
};
