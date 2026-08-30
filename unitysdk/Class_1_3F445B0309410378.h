#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightRoleAutoWeightConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3F445B0309410378_METHOD_1_0816E01E46001FD5_OFFSET UNITYSDK_OFFSET(0x1D2FEB10)
#define CLASS_1_3F445B0309410378_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D2FF020)
#define CLASS_1_3F445B0309410378_METHOD_1_753B1710DF160A44_OFFSET UNITYSDK_OFFSET(0x1D2FE800)
#define CLASS_1_3F445B0309410378_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D2FEE50)
#define CLASS_1_3F445B0309410378_METHOD_1_9DCA3B1F2BA6DBE1_OFFSET UNITYSDK_OFFSET(0x1D2FEC80)
#define CLASS_1_3F445B0309410378_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D2FEEE0)
#define CLASS_1_3F445B0309410378_METHOD_1_C6F8DA7412894E80_OFFSET UNITYSDK_OFFSET(0x1D2FF070)
#define CLASS_1_3F445B0309410378_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D2FEAB0)
#define CLASS_1_3F445B0309410378_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D2FE880)
#define CLASS_1_3F445B0309410378_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D2FEE10)
#define CLASS_1_3F445B0309410378_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D2FEF80)
#define CLASS_1_3F445B0309410378__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2FF3E0)

inline static constexpr unsigned int Class_1_3F445B0309410378_TypeDefinitionIndex = 13430;

class Class_1_3F445B0309410378 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F445B0309410378_TypeDefinitionIndex)->GetStaticField(0x3C300);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleAutoWeightConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleAutoWeightConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F445B0309410378_TypeDefinitionIndex)->GetStaticField(0x3C308);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F445B0309410378_TypeDefinitionIndex)->GetStaticField(0x3C310);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F445B0309410378_TypeDefinitionIndex)->GetStaticField(0xF680);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F445B0309410378_TypeDefinitionIndex)->GetStaticField(0xF681);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F445B0309410378__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleAutoWeightConfigRow*>* Method_1_753B1710DF160A44()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleAutoWeightConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F445B0309410378_METHOD_1_753B1710DF160A44_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F445B0309410378_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleAutoWeightConfigRow*> Method_1_0816E01E46001FD5()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleAutoWeightConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F445B0309410378_METHOD_1_0816E01E46001FD5_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRoleAutoWeightConfigRow* Method_1_9DCA3B1F2BA6DBE1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightRoleAutoWeightConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3F445B0309410378_METHOD_1_9DCA3B1F2BA6DBE1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F445B0309410378_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F445B0309410378_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F445B0309410378_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3F445B0309410378_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3F445B0309410378_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3F445B0309410378_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_C6F8DA7412894E80(::RPG::GameCore::GridFightRoleAutoWeightConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRoleAutoWeightConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_3F445B0309410378_METHOD_1_C6F8DA7412894E80_OFFSET))(a1);
	}
};
