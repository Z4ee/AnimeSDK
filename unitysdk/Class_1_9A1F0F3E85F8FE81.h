#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EaseType.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_184D2FD010EC25FA_OFFSET UNITYSDK_OFFSET(0x9EEA810)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_48BA7761929F0300_OFFSET UNITYSDK_OFFSET(0x9EEA5A0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_50C07F45139EB6E1_OFFSET UNITYSDK_OFFSET(0x9EE9DB0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7014A025F2F84343_1_OFFSET UNITYSDK_OFFSET(0x9EEA710)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7014A025F2F84343_OFFSET UNITYSDK_OFFSET(0x9EEA670)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_1_OFFSET UNITYSDK_OFFSET(0x9EEA200)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_2_OFFSET UNITYSDK_OFFSET(0x9EEA370)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_3_OFFSET UNITYSDK_OFFSET(0x9EEA4F0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_4_OFFSET UNITYSDK_OFFSET(0x9EEA790)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_7B5CF29097D2700A_OFFSET UNITYSDK_OFFSET(0x9EEA090)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_B17A8B0938A4AB0F_OFFSET UNITYSDK_OFFSET(0x9EE9F00)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_10_OFFSET UNITYSDK_OFFSET(0x9EEA480)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_11_OFFSET UNITYSDK_OFFSET(0x9EEA600)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_1_OFFSET UNITYSDK_OFFSET(0x9EE9E90)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_2_OFFSET UNITYSDK_OFFSET(0x9EE9F60)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_3_OFFSET UNITYSDK_OFFSET(0x9EE9FD0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_4_OFFSET UNITYSDK_OFFSET(0x9EEA020)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_5_OFFSET UNITYSDK_OFFSET(0x9EEA130)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_6_OFFSET UNITYSDK_OFFSET(0x9EEA190)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_7_OFFSET UNITYSDK_OFFSET(0x9EEA2A0)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_8_OFFSET UNITYSDK_OFFSET(0x9EEA300)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_9_OFFSET UNITYSDK_OFFSET(0x9EEA420)
#define CLASS_1_9A1F0F3E85F8FE81_METHOD_1_DB11C736C0498425_OFFSET UNITYSDK_OFFSET(0x9EE9E40)
#define CLASS_1_9A1F0F3E85F8FE81__CCTOR_OFFSET UNITYSDK_OFFSET(0x9EEA8E0)

inline static constexpr unsigned int Class_1_9A1F0F3E85F8FE81_TypeDefinitionIndex = 47709;

class Class_1_9A1F0F3E85F8FE81 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EaseType, ::System::Func_2<::System::Single, ::System::Single>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::EaseType, ::System::Func_2<::System::Single, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9A1F0F3E85F8FE81_TypeDefinitionIndex)->GetStaticField(0x47750);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81__CCTOR_OFFSET))();
	}

	static ::System::Func_2<::System::Single, ::System::Single>* Method_1_50C07F45139EB6E1(::RPG::GameCore::EaseType a1)
	{
		return ((::System::Func_2<::System::Single, ::System::Single>*(*)(::RPG::GameCore::EaseType))((::PBYTE)hIl2Cpp + CLASS_1_9A1F0F3E85F8FE81_METHOD_1_50C07F45139EB6E1_OFFSET))(a1);
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
