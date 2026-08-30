#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournWorkbenchFuncRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_88FDC525C319BBBE_METHOD_1_09C21FDAC6B0923F_OFFSET UNITYSDK_OFFSET(0x1C85E880)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C85ED90)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_19153AD9F199E5FA_OFFSET UNITYSDK_OFFSET(0x1C85EDE0)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_3C95C6A748D6B666_OFFSET UNITYSDK_OFFSET(0x1C85E570)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C85EBC0)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C85EC50)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C85E820)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_D01A90CF643A664F_OFFSET UNITYSDK_OFFSET(0x1C85E9F0)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C85E5F0)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C85EB80)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C85ECF0)
#define CLASS_1_88FDC525C319BBBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C85F150)

inline static constexpr unsigned int Class_1_88FDC525C319BBBE_TypeDefinitionIndex = 14806;

class Class_1_88FDC525C319BBBE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88FDC525C319BBBE_TypeDefinitionIndex)->GetStaticField(0x15BD0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88FDC525C319BBBE_TypeDefinitionIndex)->GetStaticField(0x15BD8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88FDC525C319BBBE_TypeDefinitionIndex)->GetStaticField(0x15BE0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88FDC525C319BBBE_TypeDefinitionIndex)->GetStaticField(0x8540);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88FDC525C319BBBE_TypeDefinitionIndex)->GetStaticField(0x8541);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>* Method_1_3C95C6A748D6B666()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_3C95C6A748D6B666_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*> Method_1_09C21FDAC6B0923F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_09C21FDAC6B0923F_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournWorkbenchFuncRow* Method_1_D01A90CF643A664F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournWorkbenchFuncRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_D01A90CF643A664F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_19153AD9F199E5FA(::RPG::GameCore::RogueTournWorkbenchFuncRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournWorkbenchFuncRow*))((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_19153AD9F199E5FA_OFFSET))(a1);
	}
};
