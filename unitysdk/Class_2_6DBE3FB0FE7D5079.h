#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_298CB0A85460240D.h"

class Class_0_16E4307DCC419505_44;
class Class_1_7AB88D713F5121B3_14;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CLASS_2_6DBE3FB0FE7D5079_METHOD_2_2DE5703F5B64EF58_OFFSET UNITYSDK_OFFSET(0x17C10DE0)
#define CLASS_2_6DBE3FB0FE7D5079_METHOD_2_556B0E612048B43C_OFFSET UNITYSDK_OFFSET(0x17C10D60)
#define CLASS_2_6DBE3FB0FE7D5079_METHOD_2_91DB460D6461A188_OFFSET UNITYSDK_OFFSET(0x17C10EA0)
#define CLASS_2_6DBE3FB0FE7D5079__CTOR_OFFSET UNITYSDK_OFFSET(0x17C10CF0)

inline static constexpr unsigned int Class_2_6DBE3FB0FE7D5079_TypeDefinitionIndex = 34403;

class Class_2_6DBE3FB0FE7D5079 : public ::Class_1_298CB0A85460240D
{
public:
	::RPG::Client::RPGProfilerMarker* Field_2_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_44* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_44*))((::PBYTE)hIl2Cpp + CLASS_2_6DBE3FB0FE7D5079__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_556B0E612048B43C(::Class_1_7AB88D713F5121B3_14* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7AB88D713F5121B3_14*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_6DBE3FB0FE7D5079_METHOD_2_556B0E612048B43C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_2DE5703F5B64EF58(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_6DBE3FB0FE7D5079_METHOD_2_2DE5703F5B64EF58_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_91DB460D6461A188(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_6DBE3FB0FE7D5079_METHOD_2_91DB460D6461A188_OFFSET))(this, a1, a2, a3);
	}
};
