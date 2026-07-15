#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournLayerRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3D23ECB910FBFBC9_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B6034A0)
#define CLASS_1_3D23ECB910FBFBC9_METHOD_1_28CE420FC3795992_OFFSET UNITYSDK_OFFSET(0x1B6030C0)
#define CLASS_1_3D23ECB910FBFBC9_METHOD_1_2BE8D3EA1EB0022B_OFFSET UNITYSDK_OFFSET(0x1B6034F0)
#define CLASS_1_3D23ECB910FBFBC9_METHOD_1_2D5FA17278AFC192_OFFSET UNITYSDK_OFFSET(0x1B602F50)
#define CLASS_1_3D23ECB910FBFBC9_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B6032D0)
#define CLASS_1_3D23ECB910FBFBC9_METHOD_1_92E90B581CA8B64D_OFFSET UNITYSDK_OFFSET(0x1B602C40)
#define CLASS_1_3D23ECB910FBFBC9_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B603360)
#define CLASS_1_3D23ECB910FBFBC9_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B602EF0)
#define CLASS_1_3D23ECB910FBFBC9_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B602CC0)
#define CLASS_1_3D23ECB910FBFBC9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B603290)
#define CLASS_1_3D23ECB910FBFBC9_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B603400)
#define CLASS_1_3D23ECB910FBFBC9__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B603890)

inline static constexpr unsigned int Class_1_3D23ECB910FBFBC9_TypeDefinitionIndex = 14374;

class Class_1_3D23ECB910FBFBC9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRoomRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRoomRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D23ECB910FBFBC9_TypeDefinitionIndex)->GetStaticField(0x45360);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D23ECB910FBFBC9_TypeDefinitionIndex)->GetStaticField(0x45368);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D23ECB910FBFBC9_TypeDefinitionIndex)->GetStaticField(0x45370);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D23ECB910FBFBC9_TypeDefinitionIndex)->GetStaticField(0xC060);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3D23ECB910FBFBC9_TypeDefinitionIndex)->GetStaticField(0xC061);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D23ECB910FBFBC9__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRoomRow*>* Method_1_92E90B581CA8B64D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRoomRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D23ECB910FBFBC9_METHOD_1_92E90B581CA8B64D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D23ECB910FBFBC9_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRoomRow*> Method_1_2D5FA17278AFC192()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournLayerRoomRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D23ECB910FBFBC9_METHOD_1_2D5FA17278AFC192_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournLayerRoomRow* Method_1_28CE420FC3795992(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::RogueTournLayerRoomRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3D23ECB910FBFBC9_METHOD_1_28CE420FC3795992_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D23ECB910FBFBC9_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D23ECB910FBFBC9_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3D23ECB910FBFBC9_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3D23ECB910FBFBC9_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3D23ECB910FBFBC9_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3D23ECB910FBFBC9_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_2BE8D3EA1EB0022B(::RPG::GameCore::RogueTournLayerRoomRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournLayerRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_3D23ECB910FBFBC9_METHOD_1_2BE8D3EA1EB0022B_OFFSET))(a1);
	}
};
