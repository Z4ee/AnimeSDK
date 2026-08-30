#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_001B7B029846A95F_METHOD_1_28192D91739D6BEA_OFFSET UNITYSDK_OFFSET(0x16FD43B0)
#define CLASS_1_001B7B029846A95F_METHOD_1_2830CC375AAB154A_OFFSET UNITYSDK_OFFSET(0x16FD4A40)
#define CLASS_1_001B7B029846A95F_METHOD_1_4DC6D8DF79B18157_OFFSET UNITYSDK_OFFSET(0x16FD4540)
#define CLASS_1_001B7B029846A95F_METHOD_1_512D74EA6F7FA907_OFFSET UNITYSDK_OFFSET(0x16FD4980)
#define CLASS_1_001B7B029846A95F_METHOD_1_71255662C568E801_OFFSET UNITYSDK_OFFSET(0x16FD4BD0)
#define CLASS_1_001B7B029846A95F_METHOD_1_9253C8BCB23D1935_OFFSET UNITYSDK_OFFSET(0x16FD4480)
#define CLASS_1_001B7B029846A95F_METHOD_1_97813D252DCA55E6_1_OFFSET UNITYSDK_OFFSET(0x16FD4620)
#define CLASS_1_001B7B029846A95F_METHOD_1_97813D252DCA55E6_OFFSET UNITYSDK_OFFSET(0x16FD4050)
#define CLASS_1_001B7B029846A95F_METHOD_1_B7A5F108F33E43FD_OFFSET UNITYSDK_OFFSET(0x16FD4B00)
#define CLASS_1_001B7B029846A95F__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FD4D30)

inline static constexpr unsigned int Class_1_001B7B029846A95F_TypeDefinitionIndex = 73293;

class Class_1_001B7B029846A95F : public ::System::Object
{
public:
	static ::Il2CppArray<::System::Double>** StaticGet_JBOJGLGMJLK()
	{
		return (::Il2CppArray<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_001B7B029846A95F_TypeDefinitionIndex)->GetStaticField(0x65610);
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
