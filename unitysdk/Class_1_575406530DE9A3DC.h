#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/RPG/GameCore/PunkLordScoreFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PunkLordScoreTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_575406530DE9A3DC_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18BA88E0)
#define CLASS_1_575406530DE9A3DC_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18BA8700)
#define CLASS_1_575406530DE9A3DC_METHOD_1_409E1611DB447EAD_OFFSET UNITYSDK_OFFSET(0x18BA8300)
#define CLASS_1_575406530DE9A3DC_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18BA8050)
#define CLASS_1_575406530DE9A3DC_METHOD_1_8D662B72D98AE8B2_OFFSET UNITYSDK_OFFSET(0x18BA84B0)
#define CLASS_1_575406530DE9A3DC_METHOD_1_920BE4A0856F9EEC_OFFSET UNITYSDK_OFFSET(0x18BA8930)
#define CLASS_1_575406530DE9A3DC_METHOD_1_9FB44F61ECB2C160_OFFSET UNITYSDK_OFFSET(0x18BA7FD0)
#define CLASS_1_575406530DE9A3DC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18BA87A0)
#define CLASS_1_575406530DE9A3DC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18BA82A0)
#define CLASS_1_575406530DE9A3DC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18BA86C0)
#define CLASS_1_575406530DE9A3DC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18BA8840)
#define CLASS_1_575406530DE9A3DC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BA8CE0)

inline static constexpr unsigned int Class_1_575406530DE9A3DC_TypeDefinitionIndex = 11631;

class Class_1_575406530DE9A3DC : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_575406530DE9A3DC_TypeDefinitionIndex)->GetStaticField(0x243D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordScoreTypeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordScoreTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_575406530DE9A3DC_TypeDefinitionIndex)->GetStaticField(0x243D8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_575406530DE9A3DC_TypeDefinitionIndex)->GetStaticField(0x243E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_575406530DE9A3DC_TypeDefinitionIndex)->GetStaticField(0x96D0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_575406530DE9A3DC_TypeDefinitionIndex)->GetStaticField(0x96D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_575406530DE9A3DC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordScoreTypeRow*>* Method_1_9FB44F61ECB2C160()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordScoreTypeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_575406530DE9A3DC_METHOD_1_9FB44F61ECB2C160_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_575406530DE9A3DC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordScoreTypeRow*> Method_1_409E1611DB447EAD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordScoreTypeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_575406530DE9A3DC_METHOD_1_409E1611DB447EAD_OFFSET))();
	}

	static ::RPG::GameCore::PunkLordScoreTypeRow* Method_1_8D662B72D98AE8B2(::RPG::GameCore::PunkLordScoreFinishType a1, ::RPG::GameCore::PunkLordMonsterRare a2)
	{
		return ((::RPG::GameCore::PunkLordScoreTypeRow*(*)(::RPG::GameCore::PunkLordScoreFinishType, ::RPG::GameCore::PunkLordMonsterRare))((::PBYTE)hIl2Cpp + CLASS_1_575406530DE9A3DC_METHOD_1_8D662B72D98AE8B2_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_575406530DE9A3DC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_575406530DE9A3DC_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_575406530DE9A3DC_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_575406530DE9A3DC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_575406530DE9A3DC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_575406530DE9A3DC_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_920BE4A0856F9EEC(::RPG::GameCore::PunkLordScoreTypeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PunkLordScoreTypeRow*))((::PBYTE)hIl2Cpp + CLASS_1_575406530DE9A3DC_METHOD_1_920BE4A0856F9EEC_OFFSET))(a1);
	}
};
