#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_001B7B029846A95F_METHOD_1_28192D91739D6BEA_OFFSET UNITYSDK_OFFSET(0xB5444D0)
#define CLASS_1_001B7B029846A95F_METHOD_1_2830CC375AAB154A_OFFSET UNITYSDK_OFFSET(0xB544B60)
#define CLASS_1_001B7B029846A95F_METHOD_1_4DC6D8DF79B18157_OFFSET UNITYSDK_OFFSET(0xB544660)
#define CLASS_1_001B7B029846A95F_METHOD_1_512D74EA6F7FA907_OFFSET UNITYSDK_OFFSET(0xB544AA0)
#define CLASS_1_001B7B029846A95F_METHOD_1_71255662C568E801_OFFSET UNITYSDK_OFFSET(0xB544CF0)
#define CLASS_1_001B7B029846A95F_METHOD_1_9253C8BCB23D1935_OFFSET UNITYSDK_OFFSET(0xB5445A0)
#define CLASS_1_001B7B029846A95F_METHOD_1_97813D252DCA55E6_1_OFFSET UNITYSDK_OFFSET(0xB544740)
#define CLASS_1_001B7B029846A95F_METHOD_1_97813D252DCA55E6_OFFSET UNITYSDK_OFFSET(0xB544170)
#define CLASS_1_001B7B029846A95F_METHOD_1_B7A5F108F33E43FD_OFFSET UNITYSDK_OFFSET(0xB544C20)
#define CLASS_1_001B7B029846A95F__CCTOR_OFFSET UNITYSDK_OFFSET(0xB544E50)

inline static constexpr unsigned int Class_1_001B7B029846A95F_TypeDefinitionIndex = 73390;

class Class_1_001B7B029846A95F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Double>** StaticGet_JBOJGLGMJLK()
	{
		return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_001B7B029846A95F_TypeDefinitionIndex)->GetStaticField(0x5F360);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_001B7B029846A95F__CCTOR_OFFSET))();
	}

	static ::System::Double Method_1_97813D252DCA55E6(::System::Object* a1, ::System::Int32 a2)
	{
		return ((::System::Double(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_001B7B029846A95F_METHOD_1_97813D252DCA55E6_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_28192D91739D6BEA(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Double(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_001B7B029846A95F_METHOD_1_28192D91739D6BEA_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_9253C8BCB23D1935(::System::Double a1, ::System::Int32 a2)
	{
		return ((::System::Double(*)(::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_001B7B029846A95F_METHOD_1_9253C8BCB23D1935_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_4DC6D8DF79B18157(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
	{
		return ((::System::Double(*)(::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_001B7B029846A95F_METHOD_1_4DC6D8DF79B18157_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_97813D252DCA55E6_1(::System::Object* a1, ::System::Int32 a2)
	{
		return ((::System::Double(*)(::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_001B7B029846A95F_METHOD_1_97813D252DCA55E6_1_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_512D74EA6F7FA907(::System::Single a1, ::System::Int32 a2)
	{
		return ((::System::Double(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_001B7B029846A95F_METHOD_1_512D74EA6F7FA907_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_2830CC375AAB154A(::System::Double a1, ::System::Int32 a2)
	{
		return ((::System::Double(*)(::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_001B7B029846A95F_METHOD_1_2830CC375AAB154A_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_B7A5F108F33E43FD(::RPG::GameCore::FixPoint a1, ::System::Int32 a2)
	{
		return ((::System::Double(*)(::RPG::GameCore::FixPoint, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_001B7B029846A95F_METHOD_1_B7A5F108F33E43FD_OFFSET))(a1, a2);
	}

	static ::System::Double Method_1_71255662C568E801(::System::Int32 a1)
	{
		return ((::System::Double(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_001B7B029846A95F_METHOD_1_71255662C568E801_OFFSET))(a1);
	}
};
