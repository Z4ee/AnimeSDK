#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCMainStoryBranchRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_86F56CDFA771EA28_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16ECCD50)
#define CLASS_1_86F56CDFA771EA28_METHOD_1_2D32830BB5FEE354_OFFSET UNITYSDK_OFFSET(0x16ECC480)
#define CLASS_1_86F56CDFA771EA28_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16ECCB70)
#define CLASS_1_86F56CDFA771EA28_METHOD_1_579BD0B2820579B0_OFFSET UNITYSDK_OFFSET(0x16ECCDA0)
#define CLASS_1_86F56CDFA771EA28_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16ECC500)
#define CLASS_1_86F56CDFA771EA28_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16ECCC10)
#define CLASS_1_86F56CDFA771EA28_METHOD_1_BE59C4F391F39CE1_OFFSET UNITYSDK_OFFSET(0x16ECC7B0)
#define CLASS_1_86F56CDFA771EA28_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16ECC750)
#define CLASS_1_86F56CDFA771EA28_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16ECCB30)
#define CLASS_1_86F56CDFA771EA28_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16ECCCB0)
#define CLASS_1_86F56CDFA771EA28_METHOD_1_FC2F9B85BF7233FA_OFFSET UNITYSDK_OFFSET(0x16ECC960)
#define CLASS_1_86F56CDFA771EA28__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ECD100)

inline static constexpr unsigned int Class_1_86F56CDFA771EA28_TypeDefinitionIndex = 13524;

class Class_1_86F56CDFA771EA28 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F56CDFA771EA28_TypeDefinitionIndex)->GetStaticField(0x2CD40);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryBranchRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryBranchRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F56CDFA771EA28_TypeDefinitionIndex)->GetStaticField(0x2CD48);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F56CDFA771EA28_TypeDefinitionIndex)->GetStaticField(0x2CD50);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F56CDFA771EA28_TypeDefinitionIndex)->GetStaticField(0xEEE0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F56CDFA771EA28_TypeDefinitionIndex)->GetStaticField(0xEEE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F56CDFA771EA28__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryBranchRow*>* Method_1_2D32830BB5FEE354()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryBranchRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F56CDFA771EA28_METHOD_1_2D32830BB5FEE354_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F56CDFA771EA28_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryBranchRow*> Method_1_BE59C4F391F39CE1()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCMainStoryBranchRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F56CDFA771EA28_METHOD_1_BE59C4F391F39CE1_OFFSET))();
	}

	static ::RPG::GameCore::RogueDLCMainStoryBranchRow* Method_1_FC2F9B85BF7233FA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueDLCMainStoryBranchRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_86F56CDFA771EA28_METHOD_1_FC2F9B85BF7233FA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F56CDFA771EA28_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F56CDFA771EA28_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F56CDFA771EA28_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_86F56CDFA771EA28_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_86F56CDFA771EA28_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_86F56CDFA771EA28_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_579BD0B2820579B0(::RPG::GameCore::RogueDLCMainStoryBranchRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueDLCMainStoryBranchRow*))((::PBYTE)hIl2Cpp + CLASS_1_86F56CDFA771EA28_METHOD_1_579BD0B2820579B0_OFFSET))(a1);
	}
};
