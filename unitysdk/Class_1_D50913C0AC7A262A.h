#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BindSwitchPhotoGraphFuncBtnUseType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphFuncBtnType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphModeType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"

class Class_1_83665B095F1535B5_25;
class Class_1_B343FAFD80A8B29B;
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

#define CLASS_1_D50913C0AC7A262A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1924FDD0)
#define CLASS_1_D50913C0AC7A262A_GET_CURRENTACTIVEHANDLER_OFFSET UNITYSDK_OFFSET(0x19254700)
#define CLASS_1_D50913C0AC7A262A_GET_LASTPHOTORESULTSREPEATED_OFFSET UNITYSDK_OFFSET(0x19254740)
#define CLASS_1_D50913C0AC7A262A_GET_LASTPHOTORESULTS_OFFSET UNITYSDK_OFFSET(0x19254720)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_0E3D17FC1585E6D8_OFFSET UNITYSDK_OFFSET(0x192515D0)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_3B10EBB5408EF02E_OFFSET UNITYSDK_OFFSET(0x19250C30)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_3EF33FD8BF224359_OFFSET UNITYSDK_OFFSET(0x19253690)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_46D5F26D663B553B_OFFSET UNITYSDK_OFFSET(0x192514D0)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_56247EE450BCC663_OFFSET UNITYSDK_OFFSET(0x192510A0)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_5B8206C85E8F7F7B_OFFSET UNITYSDK_OFFSET(0x1924FB80)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_5D01B53512753AEA_OFFSET UNITYSDK_OFFSET(0x19253DF0)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_60473A58F60445CF_OFFSET UNITYSDK_OFFSET(0x19253A90)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_63D2283E737389BB_OFFSET UNITYSDK_OFFSET(0x19253D80)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_65EB064B9FA11E70_OFFSET UNITYSDK_OFFSET(0x19251D00)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_67B413651B3108B1_OFFSET UNITYSDK_OFFSET(0x1924FBD0)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_67FFC6B45F241D16_OFFSET UNITYSDK_OFFSET(0x19250960)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_736CBDC49BCDDB14_OFFSET UNITYSDK_OFFSET(0x1924FB20)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_7646FFE662147970_OFFSET UNITYSDK_OFFSET(0x19250910)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_8CA9C0642042357F_OFFSET UNITYSDK_OFFSET(0x19252010)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x19253A30)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_A45C0F8A3EB76A95_OFFSET UNITYSDK_OFFSET(0x19252600)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_ADF4AD3331B4D7AD_OFFSET UNITYSDK_OFFSET(0x192539E0)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_B20A72151139C4FB_OFFSET UNITYSDK_OFFSET(0x19251340)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_B2E4ED44D097E972_OFFSET UNITYSDK_OFFSET(0x19250700)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_BA6713F831A9861D_OFFSET UNITYSDK_OFFSET(0x19251980)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_BCDFAE38F5DED333_OFFSET UNITYSDK_OFFSET(0x1924FA40)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_CF96A55B95329C0A_OFFSET UNITYSDK_OFFSET(0x192522A0)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_D2CE238054CB70B4_OFFSET UNITYSDK_OFFSET(0x19251B30)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_D5B626D9DE1B80D1_OFFSET UNITYSDK_OFFSET(0x192520F0)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_DD724269AA49742B_OFFSET UNITYSDK_OFFSET(0x192532C0)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_E269A244C1786B8C_OFFSET UNITYSDK_OFFSET(0x19253860)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_E28D5BC323824F68_OFFSET UNITYSDK_OFFSET(0x19250840)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_E64760C935C75D4D_OFFSET UNITYSDK_OFFSET(0x19250AF0)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_E77ABE669A7562CB_1_OFFSET UNITYSDK_OFFSET(0x1924FAE0)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_E77ABE669A7562CB_OFFSET UNITYSDK_OFFSET(0x1924FA90)
#define CLASS_1_D50913C0AC7A262A_METHOD_1_EDBC885B6838D667_OFFSET UNITYSDK_OFFSET(0x19253490)
#define CLASS_1_D50913C0AC7A262A_SET_CURRENTACTIVEHANDLER_OFFSET UNITYSDK_OFFSET(0x19254710)
#define CLASS_1_D50913C0AC7A262A_SET_LASTPHOTORESULTSREPEATED_OFFSET UNITYSDK_OFFSET(0x19254750)
#define CLASS_1_D50913C0AC7A262A_SET_LASTPHOTORESULTS_OFFSET UNITYSDK_OFFSET(0x19254730)
#define CLASS_1_D50913C0AC7A262A_TICK_OFFSET UNITYSDK_OFFSET(0x192504B0)
#define CLASS_1_D50913C0AC7A262A__CTOR_OFFSET UNITYSDK_OFFSET(0x1924FC20)

inline static constexpr unsigned int Class_1_D50913C0AC7A262A_TypeDefinitionIndex = 69415;

class Class_1_D50913C0AC7A262A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_B343FAFD80A8B29B*>* KGHEEMAKNGK; // 0x10
	::Class_1_83665B095F1535B5_25* GJLLLAENMPM; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*>* ALEIOEBJMAD; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* _LastPhotoResults_k__BackingField; // 0x28
	::RPG::Client::PhotoGraphSystem* CLIAIMPENOO; // 0x30
	::System::Collections::Generic::List_1<::System::String*>* _LastPhotoResultsRepeated_k__BackingField; // 0x38
	::Class_1_B343FAFD80A8B29B* _CurrentActiveHandler_k__BackingField; // 0x40
	::System::Collections::Generic::List_1<::Class_1_B343FAFD80A8B29B*>* JLAGJIBDNOK; // 0x48
	::System::Int32 IDEOPKFILNF; // 0x50

	::System::Void _ctor(::RPG::Client::PhotoGraphSystem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::PhotoGraphSystem*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A__CTOR_OFFSET))(this, a1);
	}

	static ::System::Boolean Method_1_BCDFAE38F5DED333(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType a1, ::RPG::GameCore::PhotoGraphFuncBtnType a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType, ::RPG::GameCore::PhotoGraphFuncBtnType))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_BCDFAE38F5DED333_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_E77ABE669A7562CB(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_E77ABE669A7562CB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_E77ABE669A7562CB_1(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_E77ABE669A7562CB_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_736CBDC49BCDDB14(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType a1)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::BindSwitchPhotoGraphFuncBtnUseType))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_736CBDC49BCDDB14_OFFSET))(a1);
	}

	static ::RPG::GameCore::PhotoGraphAimIdentifyType Method_1_5B8206C85E8F7F7B(::RPG::GameCore::PhotoGraphFuncBtnType a1)
	{
		return ((::RPG::GameCore::PhotoGraphAimIdentifyType(*)(::RPG::GameCore::PhotoGraphFuncBtnType))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_5B8206C85E8F7F7B_OFFSET))(a1);
	}

	static ::RPG::GameCore::PhotoGraphModeType Method_1_67B413651B3108B1(::RPG::GameCore::PhotoGraphFuncBtnType a1)
	{
		return ((::RPG::GameCore::PhotoGraphModeType(*)(::RPG::GameCore::PhotoGraphFuncBtnType))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_67B413651B3108B1_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_1_E28D5BC323824F68(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_E28D5BC323824F68_OFFSET))(this, a1);
	}

	::System::Void Method_1_7646FFE662147970()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_7646FFE662147970_OFFSET))(this);
	}

	::System::Int32 Method_1_67FFC6B45F241D16(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_67FFC6B45F241D16_OFFSET))(this, a1, a2, a3);
	}

	::System::Int32 Method_1_56247EE450BCC663(::RPG::GameCore::PropComponent* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a3)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_56247EE450BCC663_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_0E3D17FC1585E6D8(::System::String* a1, ::RPG::GameCore::StringHash a2, ::RPG::GameCore::PhotoGraphTargetSize* a3, ::System::Single a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::RPG::GameCore::StringHash, ::RPG::GameCore::PhotoGraphTargetSize*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_0E3D17FC1585E6D8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_BA6713F831A9861D(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_BA6713F831A9861D_OFFSET))(this, a1);
	}

	::System::Void Method_1_D2CE238054CB70B4(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_D2CE238054CB70B4_OFFSET))(this, a1);
	}

	::System::Void Method_1_65EB064B9FA11E70(::System::String* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_65EB064B9FA11E70_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_8CA9C0642042357F(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_8CA9C0642042357F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D5B626D9DE1B80D1(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_D5B626D9DE1B80D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_A45C0F8A3EB76A95(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_A45C0F8A3EB76A95_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF96A55B95329C0A(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_CF96A55B95329C0A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDBC885B6838D667(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_EDBC885B6838D667_OFFSET))(this, a1);
	}

	::System::Void Method_1_3EF33FD8BF224359(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_3EF33FD8BF224359_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E269A244C1786B8C(::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PhotoGraphAimContainer_PhotoGraphAim*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_E269A244C1786B8C_OFFSET))(this, a1);
	}

	::System::Void Method_1_ADF4AD3331B4D7AD(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_ADF4AD3331B4D7AD_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::RPG::Client::TextID Method_1_60473A58F60445CF()
	{
		return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_60473A58F60445CF_OFFSET))(this);
	}

	::System::Void Method_1_B2E4ED44D097E972(::Class_1_B343FAFD80A8B29B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B343FAFD80A8B29B*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_B2E4ED44D097E972_OFFSET))(this, a1);
	}

	::Class_1_B343FAFD80A8B29B* Method_1_63D2283E737389BB(::System::String* a1)
	{
		return ((::Class_1_B343FAFD80A8B29B*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_63D2283E737389BB_OFFSET))(this, a1);
	}

	::Class_1_B343FAFD80A8B29B* Method_1_5D01B53512753AEA(::System::String* a1)
	{
		return ((::Class_1_B343FAFD80A8B29B*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_5D01B53512753AEA_OFFSET))(this, a1);
	}

	::Class_2_6C1010345A89A766* Method_1_46D5F26D663B553B(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2)
	{
		return ((::Class_2_6C1010345A89A766*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_46D5F26D663B553B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B20A72151139C4FB(::Class_1_B343FAFD80A8B29B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B343FAFD80A8B29B*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_B20A72151139C4FB_OFFSET))(this, a1);
	}

	::Class_1_B343FAFD80A8B29B* Method_1_E64760C935C75D4D(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::Class_1_B343FAFD80A8B29B*(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::BindSwitchPhotoGraphFuncBtn*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_E64760C935C75D4D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_3B10EBB5408EF02E(::Class_1_B343FAFD80A8B29B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B343FAFD80A8B29B*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_3B10EBB5408EF02E_OFFSET))(this, a1);
	}

	::System::Void Method_1_DD724269AA49742B(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_METHOD_1_DD724269AA49742B_OFFSET))(this, a1);
	}

	::Class_1_B343FAFD80A8B29B* get_CurrentActiveHandler()
	{
		return ((::Class_1_B343FAFD80A8B29B*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_GET_CURRENTACTIVEHANDLER_OFFSET))(this);
	}

	::System::Void set_CurrentActiveHandler(::Class_1_B343FAFD80A8B29B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_B343FAFD80A8B29B*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_SET_CURRENTACTIVEHANDLER_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_LastPhotoResults()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_GET_LASTPHOTORESULTS_OFFSET))(this);
	}

	::System::Void set_LastPhotoResults(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_SET_LASTPHOTORESULTS_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::String*>* get_LastPhotoResultsRepeated()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_GET_LASTPHOTORESULTSREPEATED_OFFSET))(this);
	}

	::System::Void set_LastPhotoResultsRepeated(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_D50913C0AC7A262A_SET_LASTPHOTORESULTSREPEATED_OFFSET))(this, a1);
	}
};
