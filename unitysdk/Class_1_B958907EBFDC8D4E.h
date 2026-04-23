#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BindSwitchPhotoGraphFuncBtnUseType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFuncBtnType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphModeType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_00408D6054AA8022;
class Class_1_83665B095F1535B5_23;
class Class_2_6C1010345A89A766;
namespace RPG::Client { class PhotoGraphAimContainer_PhotoGraphAim; }
namespace RPG::Client { class PhotoGraphSystem; }
namespace RPG::GameCore { class BindSwitchPhotoGraphFuncBtn; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PhotoGraphTargetSize; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B958907EBFDC8D4E_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12A5E180)
#define CLASS_1_B958907EBFDC8D4E_GET_CURRENTACTIVEHANDLER_OFFSET UNITYSDK_OFFSET(0x12A60770)
#define CLASS_1_B958907EBFDC8D4E_GET_LASTPHOTORESULTSREPEATED_OFFSET UNITYSDK_OFFSET(0x12A607B0)
#define CLASS_1_B958907EBFDC8D4E_GET_LASTPHOTORESULTS_OFFSET UNITYSDK_OFFSET(0x12A60790)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_2F4B7A01BDA9B025_OFFSET UNITYSDK_OFFSET(0x12A5FAC0)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_369BB5E7FA6A1768_OFFSET UNITYSDK_OFFSET(0x12A5ED20)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x12A5EA00)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_46D5F26D663B553B_OFFSET UNITYSDK_OFFSET(0x12A5EEB0)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_5A07052D114516CB_OFFSET UNITYSDK_OFFSET(0x12A5F250)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_5B8206C85E8F7F7B_OFFSET UNITYSDK_OFFSET(0x12A5DF40)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_60473A58F60445CF_OFFSET UNITYSDK_OFFSET(0x12A604D0)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_619F106AA5CBF2A5_OFFSET UNITYSDK_OFFSET(0x12A5E780)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_63D2283E737389BB_OFFSET UNITYSDK_OFFSET(0x12A60550)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_65EB064B9FA11E70_OFFSET UNITYSDK_OFFSET(0x12A5F540)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_667CB43FC03F5370_OFFSET UNITYSDK_OFFSET(0x12A5FE00)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_67B413651B3108B1_OFFSET UNITYSDK_OFFSET(0x12A5DF90)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_70437D85C11C5222_OFFSET UNITYSDK_OFFSET(0x12A5E570)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_736CBDC49BCDDB14_OFFSET UNITYSDK_OFFSET(0x12A5DEE0)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_746A59AFA6D9A8F9_OFFSET UNITYSDK_OFFSET(0x12A5EAC0)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_7D5B794B9AA796A0_OFFSET UNITYSDK_OFFSET(0x12A605C0)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_8CA9C0642042357F_OFFSET UNITYSDK_OFFSET(0x12A5F860)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_8D626121790AEAD7_OFFSET UNITYSDK_OFFSET(0x12A5F3C0)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x12A60470)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_A37F95FE754B38A0_OFFSET UNITYSDK_OFFSET(0x12A600B0)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_A984848EA3E436DA_OFFSET UNITYSDK_OFFSET(0x12A5E730)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x12A60420)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_B7D2C046C76F0D83_OFFSET UNITYSDK_OFFSET(0x12A5F950)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_BCDFAE38F5DED333_OFFSET UNITYSDK_OFFSET(0x12A5DE00)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_C6FA776B2F1B31A6_OFFSET UNITYSDK_OFFSET(0x12A5E6A0)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_C9482F0488B5EADB_OFFSET UNITYSDK_OFFSET(0x12A5EFC0)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_DD724269AA49742B_OFFSET UNITYSDK_OFFSET(0x12A5FED0)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_E64760C935C75D4D_OFFSET UNITYSDK_OFFSET(0x12A5E8C0)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_E77ABE669A7562CB_1_OFFSET UNITYSDK_OFFSET(0x12A5DEA0)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_E77ABE669A7562CB_OFFSET UNITYSDK_OFFSET(0x12A5DE50)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_ED34DCC6F6541B09_OFFSET UNITYSDK_OFFSET(0x12A60210)
#define CLASS_1_B958907EBFDC8D4E_METHOD_1_ED8426E178156F8E_OFFSET UNITYSDK_OFFSET(0x12A602F0)
#define CLASS_1_B958907EBFDC8D4E_SET_CURRENTACTIVEHANDLER_OFFSET UNITYSDK_OFFSET(0x12A60780)
#define CLASS_1_B958907EBFDC8D4E_SET_LASTPHOTORESULTSREPEATED_OFFSET UNITYSDK_OFFSET(0x12A607C0)
#define CLASS_1_B958907EBFDC8D4E_SET_LASTPHOTORESULTS_OFFSET UNITYSDK_OFFSET(0x12A607A0)
#define CLASS_1_B958907EBFDC8D4E_TICK_OFFSET UNITYSDK_OFFSET(0x12A5E470)
#define CLASS_1_B958907EBFDC8D4E__CTOR_OFFSET UNITYSDK_OFFSET(0x12A5DFE0)

inline static constexpr unsigned int Class_1_B958907EBFDC8D4E_TypeDefinitionIndex = 64000;

class Class_1_B958907EBFDC8D4E : public ::System::Object
{
public:
	::Class_1_00408D6054AA8022* _CurrentActiveHandler_k__BackingField; // 0x10
	::System::Collections::Generic::List_1<::Class_1_00408D6054AA8022*>* Field_1_5; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* Field_1_8; // 0x20
	::Class_1_83665B095F1535B5_23* Field_1_1; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* _LastPhotoResults_k__BackingField; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_00408D6054AA8022*>* Field_1_4; // 0x38
	::RPG::Client::PhotoGraphSystem* Field_1_6; // 0x40
	::System::Collections::Generic::List_1<::System::String*>* _LastPhotoResultsRepeated_k__BackingField; // 0x48
	::System::Int32 Field_1_7; // 0x50

	::System::Void _ctor(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E__CTOR_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_BCDFAE38F5DED333(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType a1, ::RPG::GameCore::PhotoGraphFuncBtnType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType, ::RPG::GameCore::PhotoGraphFuncBtnType))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_BCDFAE38F5DED333_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E77ABE669A7562CB(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_E77ABE669A7562CB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E77ABE669A7562CB_1(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_E77ABE669A7562CB_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_736CBDC49BCDDB14(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_736CBDC49BCDDB14_OFFSET))(a1);
	}

	static ::RPG::GameCore::PhotoGraphAimIdentifyType Method_1_5B8206C85E8F7F7B(::RPG::GameCore::PhotoGraphFuncBtnType a1)
	{
		return ((::RPG::GameCore::PhotoGraphAimIdentifyType(*)(::RPG::GameCore::PhotoGraphFuncBtnType))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_5B8206C85E8F7F7B_OFFSET))(a1);
	}

	static ::RPG::GameCore::PhotoGraphModeType Method_1_67B413651B3108B1(::RPG::GameCore::PhotoGraphFuncBtnType a1)
	{
		return ((::RPG::GameCore::PhotoGraphModeType(*)(::RPG::GameCore::PhotoGraphFuncBtnType))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_67B413651B3108B1_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_C6FA776B2F1B31A6(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_C6FA776B2F1B31A6_OFFSET))(this, a1);
	}

	::System::Void Method_1_A984848EA3E436DA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_A984848EA3E436DA_OFFSET))(this);
	}

	::System::Int32 Method_1_619F106AA5CBF2A5(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_619F106AA5CBF2A5_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_746A59AFA6D9A8F9(::RPG::GameCore::PropComponent* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_746A59AFA6D9A8F9_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_C9482F0488B5EADB(::System::String* a1, ::RPG::GameCore::StringHash a2, ::RPG::GameCore::PhotoGraphTargetSize* a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::StringHash, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_C9482F0488B5EADB_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_5A07052D114516CB(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_5A07052D114516CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D626121790AEAD7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_8D626121790AEAD7_OFFSET))(this, a1);
	}

	::System::Void Method_1_65EB064B9FA11E70(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_65EB064B9FA11E70_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_8CA9C0642042357F(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_8CA9C0642042357F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B7D2C046C76F0D83(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_B7D2C046C76F0D83_OFFSET))(this, a1);
	}

	::System::Void Method_1_667CB43FC03F5370(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_667CB43FC03F5370_OFFSET))(this, a1);
	}

	::System::Void Method_1_2F4B7A01BDA9B025(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_2F4B7A01BDA9B025_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A37F95FE754B38A0(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_A37F95FE754B38A0_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED34DCC6F6541B09(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_ED34DCC6F6541B09_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_ED8426E178156F8E(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_ED8426E178156F8E_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_60473A58F60445CF()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_60473A58F60445CF_OFFSET))(this);
	}

	::System::Void Method_1_70437D85C11C5222(::Class_1_00408D6054AA8022* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00408D6054AA8022*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_70437D85C11C5222_OFFSET))(this, a1);
	}

	::Class_1_00408D6054AA8022* Method_1_63D2283E737389BB(::System::String* a1)
	{
		return ((::Class_1_00408D6054AA8022*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_63D2283E737389BB_OFFSET))(this, a1);
	}

	::Class_1_00408D6054AA8022* Method_1_7D5B794B9AA796A0(::System::String* a1)
	{
		return ((::Class_1_00408D6054AA8022*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_7D5B794B9AA796A0_OFFSET))(this, a1);
	}

	::Class_2_6C1010345A89A766* Method_1_46D5F26D663B553B(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::Class_2_6C1010345A89A766*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_46D5F26D663B553B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_369BB5E7FA6A1768(::Class_1_00408D6054AA8022* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00408D6054AA8022*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_369BB5E7FA6A1768_OFFSET))(this, a1);
	}

	::Class_1_00408D6054AA8022* Method_1_E64760C935C75D4D(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::Class_1_00408D6054AA8022*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_E64760C935C75D4D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3B10EBB5408EF02E(::Class_1_00408D6054AA8022* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00408D6054AA8022*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD724269AA49742B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_METHOD_1_DD724269AA49742B_OFFSET))(this, a1);
	}

	::Class_1_00408D6054AA8022* get_CurrentActiveHandler()
	{
		return ((::Class_1_00408D6054AA8022*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_GET_CURRENTACTIVEHANDLER_OFFSET))(this);
	}

	::System::Void set_CurrentActiveHandler(::Class_1_00408D6054AA8022* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_00408D6054AA8022*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_SET_CURRENTACTIVEHANDLER_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_LastPhotoResults()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_GET_LASTPHOTORESULTS_OFFSET))(this);
	}

	::System::Void set_LastPhotoResults(::System::Collections::Generic::List_1<::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_SET_LASTPHOTORESULTS_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_LastPhotoResultsRepeated()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_GET_LASTPHOTORESULTSREPEATED_OFFSET))(this);
	}

	::System::Void set_LastPhotoResultsRepeated(::System::Collections::Generic::List_1<::System::String*>* value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_B958907EBFDC8D4E_SET_LASTPHOTORESULTSREPEATED_OFFSET))(this, value);
	}
};
