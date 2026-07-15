#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PunkLordGroupType.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PunkLordRareConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_40119E724EAC3B1E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CF49230)
#define CLASS_1_40119E724EAC3B1E_METHOD_1_650A553E2807180F_OFFSET UNITYSDK_OFFSET(0x1CF48CD0)
#define CLASS_1_40119E724EAC3B1E_METHOD_1_825A533153B0D9D6_OFFSET UNITYSDK_OFFSET(0x1CF489C0)
#define CLASS_1_40119E724EAC3B1E_METHOD_1_8816D000E2324F8B_OFFSET UNITYSDK_OFFSET(0x1CF48E40)
#define CLASS_1_40119E724EAC3B1E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CF49060)
#define CLASS_1_40119E724EAC3B1E_METHOD_1_9F7457AF6B3CD99A_OFFSET UNITYSDK_OFFSET(0x1CF49280)
#define CLASS_1_40119E724EAC3B1E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CF490F0)
#define CLASS_1_40119E724EAC3B1E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CF48C70)
#define CLASS_1_40119E724EAC3B1E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CF48A40)
#define CLASS_1_40119E724EAC3B1E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CF49020)
#define CLASS_1_40119E724EAC3B1E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CF49190)
#define CLASS_1_40119E724EAC3B1E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF49620)

inline static constexpr unsigned int Class_1_40119E724EAC3B1E_TypeDefinitionIndex = 11832;

class Class_1_40119E724EAC3B1E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRareConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRareConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40119E724EAC3B1E_TypeDefinitionIndex)->GetStaticField(0x64920);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40119E724EAC3B1E_TypeDefinitionIndex)->GetStaticField(0x64928);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_40119E724EAC3B1E_TypeDefinitionIndex)->GetStaticField(0x64930);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_40119E724EAC3B1E_TypeDefinitionIndex)->GetStaticField(0x13590);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_40119E724EAC3B1E_TypeDefinitionIndex)->GetStaticField(0x13591);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40119E724EAC3B1E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRareConfigRow*>* Method_1_825A533153B0D9D6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRareConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_40119E724EAC3B1E_METHOD_1_825A533153B0D9D6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_40119E724EAC3B1E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRareConfigRow*> Method_1_650A553E2807180F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRareConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_40119E724EAC3B1E_METHOD_1_650A553E2807180F_OFFSET))();
	}

	static ::RPG::GameCore::PunkLordRareConfigRow* Method_1_8816D000E2324F8B(::RPG::GameCore::PunkLordGroupType a1, ::RPG::GameCore::PunkLordMonsterRare a2)
	{
		return ((::RPG::GameCore::PunkLordRareConfigRow*(*)(::RPG::GameCore::PunkLordGroupType, ::RPG::GameCore::PunkLordMonsterRare))((::PBYTE)hIl2Cpp + CLASS_1_40119E724EAC3B1E_METHOD_1_8816D000E2324F8B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_40119E724EAC3B1E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40119E724EAC3B1E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_40119E724EAC3B1E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_40119E724EAC3B1E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_40119E724EAC3B1E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_40119E724EAC3B1E_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9F7457AF6B3CD99A(::RPG::GameCore::PunkLordRareConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PunkLordRareConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_40119E724EAC3B1E_METHOD_1_9F7457AF6B3CD99A_OFFSET))(a1);
	}
};
