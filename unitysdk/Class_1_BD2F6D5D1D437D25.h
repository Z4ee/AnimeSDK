#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PlanetFesSummaryNominateType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesSummaryRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BD2F6D5D1D437D25_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18775EE0)
#define CLASS_1_BD2F6D5D1D437D25_METHOD_1_1CC494DB04A25B40_OFFSET UNITYSDK_OFFSET(0x18775AF0)
#define CLASS_1_BD2F6D5D1D437D25_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18775D00)
#define CLASS_1_BD2F6D5D1D437D25_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18775690)
#define CLASS_1_BD2F6D5D1D437D25_METHOD_1_83A39895723A05FF_OFFSET UNITYSDK_OFFSET(0x18775F30)
#define CLASS_1_BD2F6D5D1D437D25_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18775DA0)
#define CLASS_1_BD2F6D5D1D437D25_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x187758E0)
#define CLASS_1_BD2F6D5D1D437D25_METHOD_1_E2EB1C2A09589319_OFFSET UNITYSDK_OFFSET(0x18775610)
#define CLASS_1_BD2F6D5D1D437D25_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18775CC0)
#define CLASS_1_BD2F6D5D1D437D25_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18775E40)
#define CLASS_1_BD2F6D5D1D437D25_METHOD_1_FAAA6AD96958647A_OFFSET UNITYSDK_OFFSET(0x18775940)
#define CLASS_1_BD2F6D5D1D437D25__CCTOR_OFFSET UNITYSDK_OFFSET(0x18776290)

inline static constexpr unsigned int Class_1_BD2F6D5D1D437D25_TypeDefinitionIndex = 11610;

class Class_1_BD2F6D5D1D437D25 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSummaryRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSummaryRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD2F6D5D1D437D25_TypeDefinitionIndex)->GetStaticField(0x1B280);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD2F6D5D1D437D25_TypeDefinitionIndex)->GetStaticField(0x1B288);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD2F6D5D1D437D25_TypeDefinitionIndex)->GetStaticField(0x1B290);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD2F6D5D1D437D25_TypeDefinitionIndex)->GetStaticField(0x70A0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BD2F6D5D1D437D25_TypeDefinitionIndex)->GetStaticField(0x70A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD2F6D5D1D437D25__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSummaryRow*>* Method_1_E2EB1C2A09589319()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSummaryRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD2F6D5D1D437D25_METHOD_1_E2EB1C2A09589319_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD2F6D5D1D437D25_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSummaryRow*> Method_1_FAAA6AD96958647A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSummaryRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD2F6D5D1D437D25_METHOD_1_FAAA6AD96958647A_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesSummaryRow* Method_1_1CC494DB04A25B40(::RPG::GameCore::PlanetFesSummaryNominateType a1)
	{
		return ((::RPG::GameCore::PlanetFesSummaryRow*(*)(::RPG::GameCore::PlanetFesSummaryNominateType))((::PBYTE)hIl2Cpp + CLASS_1_BD2F6D5D1D437D25_METHOD_1_1CC494DB04A25B40_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD2F6D5D1D437D25_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD2F6D5D1D437D25_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BD2F6D5D1D437D25_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BD2F6D5D1D437D25_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BD2F6D5D1D437D25_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BD2F6D5D1D437D25_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_83A39895723A05FF(::RPG::GameCore::PlanetFesSummaryRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesSummaryRow*))((::PBYTE)hIl2Cpp + CLASS_1_BD2F6D5D1D437D25_METHOD_1_83A39895723A05FF_OFFSET))(a1);
	}
};
