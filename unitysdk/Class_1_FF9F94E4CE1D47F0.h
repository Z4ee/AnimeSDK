#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CombatPowerRelicRarityType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/RPG/GameCore/UpgradeAvatarSubRelicType.h"
#include "unitysdk/System/Object.h"

class Class_1_73C1DBA2BBC7D4F7;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FF9F94E4CE1D47F0_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1A40A940)
#define CLASS_1_FF9F94E4CE1D47F0_METHOD_1_6B371E7FD4C13999_OFFSET UNITYSDK_OFFSET(0x1A40AE30)
#define CLASS_1_FF9F94E4CE1D47F0_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1A40A770)
#define CLASS_1_FF9F94E4CE1D47F0_METHOD_1_8A321F63F77C8ADD_OFFSET UNITYSDK_OFFSET(0x1A40A990)
#define CLASS_1_FF9F94E4CE1D47F0_METHOD_1_8E85B33987E45DD5_OFFSET UNITYSDK_OFFSET(0x1A40AFA0)
#define CLASS_1_FF9F94E4CE1D47F0_METHOD_1_9EC41ECC53D61BB8_OFFSET UNITYSDK_OFFSET(0x1A40AD50)
#define CLASS_1_FF9F94E4CE1D47F0_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1A40A800)
#define CLASS_1_FF9F94E4CE1D47F0_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1A40ADD0)
#define CLASS_1_FF9F94E4CE1D47F0_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1A40A540)
#define CLASS_1_FF9F94E4CE1D47F0_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1A40A500)
#define CLASS_1_FF9F94E4CE1D47F0_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1A40A8A0)
#define CLASS_1_FF9F94E4CE1D47F0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A40B1B0)

inline static constexpr unsigned int Class_1_FF9F94E4CE1D47F0_TypeDefinitionIndex = 15241;

class Class_1_FF9F94E4CE1D47F0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_73C1DBA2BBC7D4F7*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_73C1DBA2BBC7D4F7*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF9F94E4CE1D47F0_TypeDefinitionIndex)->GetStaticField(0x46BD0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF9F94E4CE1D47F0_TypeDefinitionIndex)->GetStaticField(0x46BD8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF9F94E4CE1D47F0_TypeDefinitionIndex)->GetStaticField(0x46BE0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF9F94E4CE1D47F0_TypeDefinitionIndex)->GetStaticField(0x10620);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FF9F94E4CE1D47F0_TypeDefinitionIndex)->GetStaticField(0x10621);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF9F94E4CE1D47F0__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF9F94E4CE1D47F0_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF9F94E4CE1D47F0_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF9F94E4CE1D47F0_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FF9F94E4CE1D47F0_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FF9F94E4CE1D47F0_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FF9F94E4CE1D47F0_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A321F63F77C8ADD(::Class_1_73C1DBA2BBC7D4F7* a1)
	{
		return ((::System::Void(*)(::Class_1_73C1DBA2BBC7D4F7*))((::PBYTE)hIl2Cpp + CLASS_1_FF9F94E4CE1D47F0_METHOD_1_8A321F63F77C8ADD_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_73C1DBA2BBC7D4F7*>* Method_1_9EC41ECC53D61BB8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_73C1DBA2BBC7D4F7*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF9F94E4CE1D47F0_METHOD_1_9EC41ECC53D61BB8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF9F94E4CE1D47F0_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_73C1DBA2BBC7D4F7*> Method_1_6B371E7FD4C13999()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_73C1DBA2BBC7D4F7*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FF9F94E4CE1D47F0_METHOD_1_6B371E7FD4C13999_OFFSET))();
	}

	static ::Class_1_73C1DBA2BBC7D4F7* Method_1_8E85B33987E45DD5(::RPG::GameCore::UpgradeAvatarSubRelicType a1, ::RPG::GameCore::CombatPowerRelicRarityType a2, ::System::UInt32 a3, ::RPG::GameCore::RelicType a4)
	{
		return ((::Class_1_73C1DBA2BBC7D4F7*(*)(::RPG::GameCore::UpgradeAvatarSubRelicType, ::RPG::GameCore::CombatPowerRelicRarityType, ::System::UInt32, ::RPG::GameCore::RelicType))((::PBYTE)hIl2Cpp + CLASS_1_FF9F94E4CE1D47F0_METHOD_1_8E85B33987E45DD5_OFFSET))(a1, a2, a3, a4);
	}
};
