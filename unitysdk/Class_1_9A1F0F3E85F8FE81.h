#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EaseType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_184D2FD010EC25FA_OFFSET UNITYSDK_OFFSET(0x1379BF40)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_48BA7761929F0300_OFFSET UNITYSDK_OFFSET(0x1379BCD0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7014A025F2F84343_1_OFFSET UNITYSDK_OFFSET(0x1379BE40)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7014A025F2F84343_OFFSET UNITYSDK_OFFSET(0x1379BDA0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_1_OFFSET UNITYSDK_OFFSET(0x1379B930)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_2_OFFSET UNITYSDK_OFFSET(0x1379BAA0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_3_OFFSET UNITYSDK_OFFSET(0x1379BC20)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_4_OFFSET UNITYSDK_OFFSET(0x1379BEC0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0x1379B7C0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_B17A8B0938A4AB0F_OFFSET UNITYSDK_OFFSET(0x1379B630)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_C87A74C351EA8CB6_OFFSET UNITYSDK_OFFSET(0x1379B4E0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_10_OFFSET UNITYSDK_OFFSET(0x1379BBB0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_11_OFFSET UNITYSDK_OFFSET(0x1379BD30)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_1_OFFSET UNITYSDK_OFFSET(0x1379B5C0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_2_OFFSET UNITYSDK_OFFSET(0x1379B690)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_3_OFFSET UNITYSDK_OFFSET(0x1379B700)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_4_OFFSET UNITYSDK_OFFSET(0x1379B750)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_5_OFFSET UNITYSDK_OFFSET(0x1379B860)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_6_OFFSET UNITYSDK_OFFSET(0x1379B8C0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_7_OFFSET UNITYSDK_OFFSET(0x1379B9D0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_8_OFFSET UNITYSDK_OFFSET(0x1379BA30)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_9_OFFSET UNITYSDK_OFFSET(0x1379BB50)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_OFFSET UNITYSDK_OFFSET(0x1379B570)
#define CLASS_1_9A1F0F3E85F8FE81__CCTOR_OFFSET UNITYSDK_OFFSET(0x1379C010)

inline static constexpr unsigned int Class_1_9A1F0F3E85F8FE81_TypeDefinitionIndex = 55174;

class Class_1_9A1F0F3E85F8FE81 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EaseType, ::System::Func_2<::System::Single, ::System::Single>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EaseType, ::System::Func_2<::System::Single, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A1F0F3E85F8FE81_TypeDefinitionIndex)->GetStaticField(0x57100);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81__CCTOR_OFFSET))();
	}

	static ::System::Func_2<::System::Single, ::System::Single>* Method_1_C87A74C351EA8CB6(::RPG::GameCore::EaseType a1)
	{
		return ((::System::Func_2<::System::Single, ::System::Single>*(*)(::RPG::GameCore::EaseType))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_C87A74C351EA8CB6_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_B17A8B0938A4AB0F(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_B17A8B0938A4AB0F_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425_2(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_2_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425_3(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_3_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425_4(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_4_OFFSET))(a1);
	}

	static ::System::Single Method_1_7B5CF29097D2700A(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425_5(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_5_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425_6(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_6_OFFSET))(a1);
	}

	static ::System::Single Method_1_7B5CF29097D2700A_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425_7(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_7_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425_8(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_8_OFFSET))(a1);
	}

	static ::System::Single Method_1_7B5CF29097D2700A_2(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_2_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425_9(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_9_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425_10(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_10_OFFSET))(a1);
	}

	static ::System::Single Method_1_7B5CF29097D2700A_3(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_3_OFFSET))(a1);
	}

	static ::System::Single Method_1_48BA7761929F0300(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_48BA7761929F0300_OFFSET))(a1);
	}

	static ::System::Single Method_1_DB11C736C0498425_11(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_11_OFFSET))(a1);
	}

	static ::System::Single Method_1_7014A025F2F84343(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7014A025F2F84343_OFFSET))(a1);
	}

	static ::System::Single Method_1_7014A025F2F84343_1(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7014A025F2F84343_1_OFFSET))(a1);
	}

	static ::System::Single Method_1_7B5CF29097D2700A_4(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_4_OFFSET))(a1);
	}

	static ::System::Single Method_1_184D2FD010EC25FA(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_184D2FD010EC25FA_OFFSET))(a1);
	}
};
