#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeFloorUnlockRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BB09AFEA00E85624_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x181FACC0)
#define CLASS_1_BB09AFEA00E85624_METHOD_1_2C71546CD2B37A54_OFFSET UNITYSDK_OFFSET(0x181FAD10)
#define CLASS_1_BB09AFEA00E85624_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x181FAAE0)
#define CLASS_1_BB09AFEA00E85624_METHOD_1_4418A26641C4EC99_OFFSET UNITYSDK_OFFSET(0x181FA720)
#define CLASS_1_BB09AFEA00E85624_METHOD_1_620B54EF82301C26_OFFSET UNITYSDK_OFFSET(0x181FA8D0)
#define CLASS_1_BB09AFEA00E85624_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x181FA470)
#define CLASS_1_BB09AFEA00E85624_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x181FAB80)
#define CLASS_1_BB09AFEA00E85624_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x181FA6C0)
#define CLASS_1_BB09AFEA00E85624_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x181FAAA0)
#define CLASS_1_BB09AFEA00E85624_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x181FAC20)
#define CLASS_1_BB09AFEA00E85624_METHOD_1_F7673B10D6A31360_OFFSET UNITYSDK_OFFSET(0x181FA3F0)
#define CLASS_1_BB09AFEA00E85624__CCTOR_OFFSET UNITYSDK_OFFSET(0x181FB070)

inline static constexpr unsigned int Class_1_BB09AFEA00E85624_TypeDefinitionIndex = 13318;

class Class_1_BB09AFEA00E85624 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB09AFEA00E85624_TypeDefinitionIndex)->GetStaticField(0x1E3D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB09AFEA00E85624_TypeDefinitionIndex)->GetStaticField(0x1E3D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorUnlockRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorUnlockRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB09AFEA00E85624_TypeDefinitionIndex)->GetStaticField(0x1E3E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB09AFEA00E85624_TypeDefinitionIndex)->GetStaticField(0x7CD0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BB09AFEA00E85624_TypeDefinitionIndex)->GetStaticField(0x7CD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB09AFEA00E85624__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorUnlockRow*>* Method_1_F7673B10D6A31360()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB09AFEA00E85624_METHOD_1_F7673B10D6A31360_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB09AFEA00E85624_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorUnlockRow*> Method_1_4418A26641C4EC99()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MazeFloorUnlockRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB09AFEA00E85624_METHOD_1_4418A26641C4EC99_OFFSET))();
	}

	static ::RPG::GameCore::MazeFloorUnlockRow* Method_1_620B54EF82301C26(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MazeFloorUnlockRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BB09AFEA00E85624_METHOD_1_620B54EF82301C26_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB09AFEA00E85624_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB09AFEA00E85624_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BB09AFEA00E85624_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BB09AFEA00E85624_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BB09AFEA00E85624_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BB09AFEA00E85624_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_2C71546CD2B37A54(::RPG::GameCore::MazeFloorUnlockRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MazeFloorUnlockRow*))((::PBYTE)hIl2Cpp + CLASS_1_BB09AFEA00E85624_METHOD_1_2C71546CD2B37A54_OFFSET))(a1);
	}
};
