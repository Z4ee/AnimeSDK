#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMagicGambleUnitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A4D19021D5D8A308_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x170D21E0)
#define CLASS_1_A4D19021D5D8A308_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x170D2000)
#define CLASS_1_A4D19021D5D8A308_METHOD_1_4430F995DEDD2080_OFFSET UNITYSDK_OFFSET(0x170D2230)
#define CLASS_1_A4D19021D5D8A308_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x170D1990)
#define CLASS_1_A4D19021D5D8A308_METHOD_1_A068BC69BAAF095A_OFFSET UNITYSDK_OFFSET(0x170D1DF0)
#define CLASS_1_A4D19021D5D8A308_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x170D20A0)
#define CLASS_1_A4D19021D5D8A308_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x170D1BE0)
#define CLASS_1_A4D19021D5D8A308_METHOD_1_DAD789FF9C2C83D5_OFFSET UNITYSDK_OFFSET(0x170D1C40)
#define CLASS_1_A4D19021D5D8A308_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x170D1FC0)
#define CLASS_1_A4D19021D5D8A308_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x170D2140)
#define CLASS_1_A4D19021D5D8A308_METHOD_1_F9545614D1903A1C_OFFSET UNITYSDK_OFFSET(0x170D1910)
#define CLASS_1_A4D19021D5D8A308__CCTOR_OFFSET UNITYSDK_OFFSET(0x170D2590)

inline static constexpr unsigned int Class_1_A4D19021D5D8A308_TypeDefinitionIndex = 13624;

class Class_1_A4D19021D5D8A308 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A4D19021D5D8A308_TypeDefinitionIndex)->GetStaticField(0x18F10);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleUnitRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleUnitRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A4D19021D5D8A308_TypeDefinitionIndex)->GetStaticField(0x18F18);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A4D19021D5D8A308_TypeDefinitionIndex)->GetStaticField(0x18F20);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A4D19021D5D8A308_TypeDefinitionIndex)->GetStaticField(0x71B0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A4D19021D5D8A308_TypeDefinitionIndex)->GetStaticField(0x71B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A4D19021D5D8A308__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleUnitRow*>* Method_1_F9545614D1903A1C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleUnitRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A4D19021D5D8A308_METHOD_1_F9545614D1903A1C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A4D19021D5D8A308_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleUnitRow*> Method_1_DAD789FF9C2C83D5()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicGambleUnitRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A4D19021D5D8A308_METHOD_1_DAD789FF9C2C83D5_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicGambleUnitRow* Method_1_A068BC69BAAF095A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueMagicGambleUnitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A4D19021D5D8A308_METHOD_1_A068BC69BAAF095A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A4D19021D5D8A308_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A4D19021D5D8A308_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A4D19021D5D8A308_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A4D19021D5D8A308_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A4D19021D5D8A308_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A4D19021D5D8A308_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_4430F995DEDD2080(::RPG::GameCore::RogueMagicGambleUnitRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMagicGambleUnitRow*))((::PBYTE)hIl2Cpp + CLASS_1_A4D19021D5D8A308_METHOD_1_4430F995DEDD2080_OFFSET))(a1);
	}
};
