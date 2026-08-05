#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_321489CFFF7B18E7.h"
#include "unitysdk/Class_2_9992666471540AF7_Struct_2_856A57F50BE61AD4.h"
#include "unitysdk/Class_2_E26E60413FE51F20_Enum_3_371820A783BE5A45.h"
#include "unitysdk/Class_2_E26E60413FE51F20_Struct_2_5065DC1B291160F1.h"
#include "unitysdk/Enum_3_C2185791B816AA7D.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

class Class_2_785FDC7D0DA58280;
class Class_2_DF374A2D13405DBB;
namespace MoleMole::Arcade::CompanionProject::Client { class CpNumTipsBehaviour; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Sprite; }
template <typename T1, typename T2, typename T3, typename T4, typename T5> class Class_2_12969538C1D276FA;
template <typename T1, typename T2, typename T3, typename T4> class Class_2_8F34622A00A9E8F6;

#define CLASS_2_E26E60413FE51F20_METHOD_2_13AE28465F865BF2_OFFSET UNITYSDK_OFFSET(0x1F72E230)
#define CLASS_2_E26E60413FE51F20_METHOD_2_1D98A1198E1694F8_OFFSET UNITYSDK_OFFSET(0x1F72CD70)
#define CLASS_2_E26E60413FE51F20_METHOD_2_205A14011EEBDE57_OFFSET UNITYSDK_OFFSET(0x1F72D7D0)
#define CLASS_2_E26E60413FE51F20_METHOD_2_356E07C40C3C3D55_OFFSET UNITYSDK_OFFSET(0x1F72E470)
#define CLASS_2_E26E60413FE51F20_METHOD_2_3B5E3E611AD1BA4F_OFFSET UNITYSDK_OFFSET(0x1F72D830)
#define CLASS_2_E26E60413FE51F20_METHOD_2_40E03D354D1ACC85_OFFSET UNITYSDK_OFFSET(0x1F72BD50)
#define CLASS_2_E26E60413FE51F20_METHOD_2_69E25B9DBC584C64_OFFSET UNITYSDK_OFFSET(0x1F72DD40)
#define CLASS_2_E26E60413FE51F20_METHOD_2_8F3352B465C2DEDB_OFFSET UNITYSDK_OFFSET(0x1F72E2A0)
#define CLASS_2_E26E60413FE51F20_METHOD_2_A250DB0BC2458A05_OFFSET UNITYSDK_OFFSET(0x1F72C6F0)
#define CLASS_2_E26E60413FE51F20_METHOD_2_A3DF100F0752DD6E_OFFSET UNITYSDK_OFFSET(0x1F72CC60)
#define CLASS_2_E26E60413FE51F20_METHOD_2_D7189F5A6E4F45D2_OFFSET UNITYSDK_OFFSET(0x1F72DC50)
#define CLASS_2_E26E60413FE51F20_METHOD_2_F96956F747C6980D_OFFSET UNITYSDK_OFFSET(0x1F72C640)
#define CLASS_2_E26E60413FE51F20_METHOD_2_F9E939D4E9AAE0E2_OFFSET UNITYSDK_OFFSET(0x1F72AD00)
#define CLASS_2_E26E60413FE51F20__CTOR_OFFSET UNITYSDK_OFFSET(0x1F72A5F0)

inline static constexpr unsigned int Class_2_E26E60413FE51F20_TypeDefinitionIndex = 94774;

class Class_2_E26E60413FE51F20 : public ::Class_1_321489CFFF7B18E7
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>*>* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* Field_2_0; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Sprite*>* Field_2_1; // 0x28
	::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* Field_2_7; // 0x30
	::System::Collections::Generic::Queue_1<::Class_2_E26E60413FE51F20_Struct_2_5065DC1B291160F1>* Field_2_5; // 0x38
	::System::Collections::Generic::Queue_1<::Class_2_E26E60413FE51F20_Struct_2_5065DC1B291160F1>* Field_2_6; // 0x40
	::System::Double Field_2_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_F9E939D4E9AAE0E2(::Class_2_785FDC7D0DA58280* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_785FDC7D0DA58280*))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20_METHOD_2_F9E939D4E9AAE0E2_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E03D354D1ACC85()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20_METHOD_2_40E03D354D1ACC85_OFFSET))(this);
	}

	::System::String* Method_2_F96956F747C6980D(::Class_2_E26E60413FE51F20_Enum_3_371820A783BE5A45 a1, ::System::Int32 a2)
	{
		return ((::System::String*(*)(::PVOID, ::Class_2_E26E60413FE51F20_Enum_3_371820A783BE5A45, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20_METHOD_2_F96956F747C6980D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_A250DB0BC2458A05(::Class_2_9992666471540AF7_Struct_2_856A57F50BE61AD4 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_9992666471540AF7_Struct_2_856A57F50BE61AD4))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20_METHOD_2_A250DB0BC2458A05_OFFSET))(this, a1);
	}

	::System::Void Method_2_3B5E3E611AD1BA4F(::Class_2_12969538C1D276FA<::Enum_3_C2185791B816AA7D, ::System::Int32, ::Struct_2_E614D3B245F96744, ::System::Boolean, ::System::UInt32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_12969538C1D276FA<::Enum_3_C2185791B816AA7D, ::System::Int32, ::Struct_2_E614D3B245F96744, ::System::Boolean, ::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20_METHOD_2_3B5E3E611AD1BA4F_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_A3DF100F0752DD6E()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20_METHOD_2_A3DF100F0752DD6E_OFFSET))(this);
	}

	::System::Void Method_2_D7189F5A6E4F45D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20_METHOD_2_D7189F5A6E4F45D2_OFFSET))(this);
	}

	::UnityEngine::Sprite* Method_2_13AE28465F865BF2(::Class_2_E26E60413FE51F20_Enum_3_371820A783BE5A45 a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::Class_2_E26E60413FE51F20_Enum_3_371820A783BE5A45, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20_METHOD_2_13AE28465F865BF2_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Sprite* Method_2_8F3352B465C2DEDB(::System::String* a1)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20_METHOD_2_8F3352B465C2DEDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_356E07C40C3C3D55(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20_METHOD_2_356E07C40C3C3D55_OFFSET))(this, a1);
	}

	::System::Void Method_2_69E25B9DBC584C64(::System::UInt32 a1, ::Class_2_DF374A2D13405DBB* a2, ::System::Collections::Generic::Queue_1<::Class_2_E26E60413FE51F20_Struct_2_5065DC1B291160F1>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_2_DF374A2D13405DBB*, ::System::Collections::Generic::Queue_1<::Class_2_E26E60413FE51F20_Struct_2_5065DC1B291160F1>*))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20_METHOD_2_69E25B9DBC584C64_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_1D98A1198E1694F8(::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour* a1, ::Class_2_8F34622A00A9E8F6<::Enum_3_C2185791B816AA7D, ::System::Int32, ::Struct_2_E614D3B245F96744, ::System::Boolean>* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Arcade::CompanionProject::Client::CpNumTipsBehaviour*, ::Class_2_8F34622A00A9E8F6<::Enum_3_C2185791B816AA7D, ::System::Int32, ::Struct_2_E614D3B245F96744, ::System::Boolean>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20_METHOD_2_1D98A1198E1694F8_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_205A14011EEBDE57(::Enum_3_C2185791B816AA7D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_C2185791B816AA7D))((::PBYTE)hIl2Cpp + CLASS_2_E26E60413FE51F20_METHOD_2_205A14011EEBDE57_OFFSET))(this, a1);
	}
};
