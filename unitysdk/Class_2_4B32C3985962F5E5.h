#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

class Class_0_16E4307DCC419505_1026;
class Class_2_AF8737E878E8536B;
class Class_2_E1E830ACEA2D2842;
namespace RPG::Client { class BeneficialBuffViewData; }
namespace RPG::Client { template <typename T> class NodeListViewPanel_1; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_4B32C3985962F5E5_METHOD_2_0DCA45EDA639F38E_OFFSET UNITYSDK_OFFSET(0x169C1F30)
#define CLASS_2_4B32C3985962F5E5_METHOD_2_141384519CB2AD57_OFFSET UNITYSDK_OFFSET(0x169C1E40)
#define CLASS_2_4B32C3985962F5E5_METHOD_2_40584B808072C1C1_OFFSET UNITYSDK_OFFSET(0x169C2040)
#define CLASS_2_4B32C3985962F5E5_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x169C1FB0)
#define CLASS_2_4B32C3985962F5E5_METHOD_2_EAB1BE386CC4D972_OFFSET UNITYSDK_OFFSET(0x169C1BE0)
#define CLASS_2_4B32C3985962F5E5__CTOR_OFFSET UNITYSDK_OFFSET(0x169C20B0)
#define CLASS_2_4B32C3985962F5E5__ONBIND_OFFSET UNITYSDK_OFFSET(0x169C1B40)
#define CLASS_2_4B32C3985962F5E5__SETUPVIEW_B__4_0_OFFSET UNITYSDK_OFFSET(0x169C20E0)

inline static constexpr unsigned int Class_2_4B32C3985962F5E5_TypeDefinitionIndex = 67974;

class Class_2_4B32C3985962F5E5 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::RPG::Client::BeneficialBuffViewData* Field_2_1; // 0x60
	::Class_2_E1E830ACEA2D2842* Field_2_2; // 0x68
	::RPG::Client::NodeListViewPanel_1<::Class_2_AF8737E878E8536B*>* Field_2_3; // 0x70
	::UnityEngine::UI::Text* Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B32C3985962F5E5__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B32C3985962F5E5__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_EAB1BE386CC4D972(::RPG::Client::BeneficialBuffViewData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::BeneficialBuffViewData*))((::PBYTE)hIl2Cpp + CLASS_2_4B32C3985962F5E5_METHOD_2_EAB1BE386CC4D972_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1026* Method_2_141384519CB2AD57(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::Class_0_16E4307DCC419505_1026*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_4B32C3985962F5E5_METHOD_2_141384519CB2AD57_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_1026* Method_2_0DCA45EDA639F38E()
	{
		return ((::Class_0_16E4307DCC419505_1026*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B32C3985962F5E5_METHOD_2_0DCA45EDA639F38E_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B32C3985962F5E5_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::RPG::Client::Promises::Promise* Method_2_40584B808072C1C1()
	{
		return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4B32C3985962F5E5_METHOD_2_40584B808072C1C1_OFFSET))(this);
	}

	::System::Void _SetupView_b__4_0(::Class_2_AF8737E878E8536B* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AF8737E878E8536B*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4B32C3985962F5E5__SETUPVIEW_B__4_0_OFFSET))(this, a1, a2);
	}
};
