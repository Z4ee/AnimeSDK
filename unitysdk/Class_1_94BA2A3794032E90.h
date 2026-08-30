#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveSpineUnlockRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_94BA2A3794032E90_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CD157F0)
#define CLASS_1_94BA2A3794032E90_METHOD_1_3A03639DFB1EBC19_OFFSET UNITYSDK_OFFSET(0x1CD152E0)
#define CLASS_1_94BA2A3794032E90_METHOD_1_509BBBA5E6CE38C4_OFFSET UNITYSDK_OFFSET(0x1CD14FD0)
#define CLASS_1_94BA2A3794032E90_METHOD_1_8989BE256D1B41D8_OFFSET UNITYSDK_OFFSET(0x1CD15840)
#define CLASS_1_94BA2A3794032E90_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CD15620)
#define CLASS_1_94BA2A3794032E90_METHOD_1_AC57CCCB7CF500B9_OFFSET UNITYSDK_OFFSET(0x1CD15450)
#define CLASS_1_94BA2A3794032E90_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CD156B0)
#define CLASS_1_94BA2A3794032E90_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CD15280)
#define CLASS_1_94BA2A3794032E90_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CD15050)
#define CLASS_1_94BA2A3794032E90_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CD155E0)
#define CLASS_1_94BA2A3794032E90_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CD15750)
#define CLASS_1_94BA2A3794032E90__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD15BB0)

inline static constexpr unsigned int Class_1_94BA2A3794032E90_TypeDefinitionIndex = 11800;

class Class_1_94BA2A3794032E90 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94BA2A3794032E90_TypeDefinitionIndex)->GetStaticField(0x44140);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94BA2A3794032E90_TypeDefinitionIndex)->GetStaticField(0x44148);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94BA2A3794032E90_TypeDefinitionIndex)->GetStaticField(0x44150);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_94BA2A3794032E90_TypeDefinitionIndex)->GetStaticField(0x100E0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_94BA2A3794032E90_TypeDefinitionIndex)->GetStaticField(0x100E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>* Method_1_509BBBA5E6CE38C4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_509BBBA5E6CE38C4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*> Method_1_3A03639DFB1EBC19()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpineUnlockRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_3A03639DFB1EBC19_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveSpineUnlockRow* Method_1_AC57CCCB7CF500B9(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveSpineUnlockRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_AC57CCCB7CF500B9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_8989BE256D1B41D8(::RPG::GameCore::IdleLiveSpineUnlockRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpineUnlockRow*))((::PBYTE)hIl2Cpp + CLASS_1_94BA2A3794032E90_METHOD_1_8989BE256D1B41D8_OFFSET))(a1);
	}
};
