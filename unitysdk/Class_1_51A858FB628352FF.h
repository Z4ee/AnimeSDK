#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_51A858FB628352FF_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x15C12F70)
#define CLASS_1_51A858FB628352FF_METHOD_1_BDB2A3C5618D0426_OFFSET UNITYSDK_OFFSET(0x15C12F90)
#define CLASS_1_51A858FB628352FF_SET_ISENABLED_OFFSET UNITYSDK_OFFSET(0x15C12F80)

inline static constexpr unsigned int Class_1_51A858FB628352FF_TypeDefinitionIndex = 56559;

class Class_1_51A858FB628352FF : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet__IsEnabled_k__BackingField()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_51A858FB628352FF_TypeDefinitionIndex)->GetStaticField(0x1BC0);
	}

	static ::System::Boolean get_IsEnabled()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_51A858FB628352FF_GET_ISENABLED_OFFSET))();
	}

	static ::System::Void set_IsEnabled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_51A858FB628352FF_SET_ISENABLED_OFFSET))(a1);
	}

	static ::System::Void Method_1_BDB2A3C5618D0426(::System::String* a1, ::System::String* a2, ::RPG::GameCore::FixPoint a3, ::System::String* a4, ::System::String* a5, ::System::String* a6)
	{
		return ((::System::Void(*)(::System::String*, ::System::String*, ::RPG::GameCore::FixPoint, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_51A858FB628352FF_METHOD_1_BDB2A3C5618D0426_OFFSET))(a1, a2, a3, a4, a5, a6);
	}
};
