#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4156D5F344F828BD.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"

class Class_1_05BD9C87E93CA0F8;
class Class_2_6CE592807426216E;
class Class_2_CC9EB486A8D01931;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class DamageTypeRow; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_3_437010CBFFA61293_METHOD_3_1659BCB6D1A9FC34_OFFSET UNITYSDK_OFFSET(0x15948B20)
#define CLASS_3_437010CBFFA61293_METHOD_3_42C5BADE1C9EFC80_1_OFFSET UNITYSDK_OFFSET(0x159498E0)
#define CLASS_3_437010CBFFA61293_METHOD_3_42C5BADE1C9EFC80_OFFSET UNITYSDK_OFFSET(0x15949390)
#define CLASS_3_437010CBFFA61293_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x15947D10)
#define CLASS_3_437010CBFFA61293_METHOD_3_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x15949090)
#define CLASS_3_437010CBFFA61293_METHOD_3_9094A96EEEB7AD9B_OFFSET UNITYSDK_OFFSET(0x15949730)
#define CLASS_3_437010CBFFA61293_METHOD_3_927FAEA36AA4115E_OFFSET UNITYSDK_OFFSET(0x15949C30)
#define CLASS_3_437010CBFFA61293_METHOD_3_A01F987742BD20DA_OFFSET UNITYSDK_OFFSET(0x159482D0)
#define CLASS_3_437010CBFFA61293_METHOD_3_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x15948440)
#define CLASS_3_437010CBFFA61293_METHOD_3_ABE7CF9FA1B8CCA3_OFFSET UNITYSDK_OFFSET(0x15947ED0)
#define CLASS_3_437010CBFFA61293_METHOD_3_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0x159499C0)
#define CLASS_3_437010CBFFA61293_METHOD_3_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0x15949480)
#define CLASS_3_437010CBFFA61293_METHOD_3_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x159492F0)
#define CLASS_3_437010CBFFA61293_METHOD_3_B387E1AED8A8F880_OFFSET UNITYSDK_OFFSET(0x15949B50)
#define CLASS_3_437010CBFFA61293_METHOD_3_B51F0EDFD675DF68_OFFSET UNITYSDK_OFFSET(0x15948100)
#define CLASS_3_437010CBFFA61293_METHOD_3_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x15948500)
#define CLASS_3_437010CBFFA61293_METHOD_3_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0x15949120)
#define CLASS_3_437010CBFFA61293_METHOD_3_F6AE21AA4AB06AC6_OFFSET UNITYSDK_OFFSET(0x15949CC0)
#define CLASS_3_437010CBFFA61293_METHOD_3_FA383E53DEC53851_OFFSET UNITYSDK_OFFSET(0x15948F80)
#define CLASS_3_437010CBFFA61293_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15947FC0)
#define CLASS_3_437010CBFFA61293_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15948020)
#define CLASS_3_437010CBFFA61293__CTOR_OFFSET UNITYSDK_OFFSET(0x15949E70)
#define CLASS_3_437010CBFFA61293__ONBIND_OFFSET UNITYSDK_OFFSET(0x15947A70)

inline static constexpr unsigned int Class_3_437010CBFFA61293_TypeDefinitionIndex = 72014;

class Class_3_437010CBFFA61293 : public ::Class_2_4156D5F344F828BD
{
public:
	// static const ::System::String* GGCDKJBKFBA; // 0x0
	// static const ::System::String* CDCIEANGMOG; // 0x0
	// static const ::System::String* LMHJHHEELLO; // 0x0
	// static const ::System::String* IPEBADOJPBJ; // 0x0
	// static const ::System::String* FDNHFFKBFKP; // 0x0
	// static const ::System::String* AKEEJDGLCLL; // 0x0
	// static const ::System::String* ALAGAKENOAI; // 0x0
	// static const ::System::String* NNMNBGDBJAN; // 0x0
	// static const ::System::String* MOMHAJJMGIJ; // 0x0
	// static const ::System::String* BKCEMFNIODM; // 0x0
	::UnityEngine::UI::Image* AJKPFICIIIP; // 0xB8
	::UnityEngine::ParticleSystem* DHENGDCFOHA; // 0xC0
	::UnityEngine::Transform* KOJJJDOGJPN; // 0xC8
	::UnityEngine::Animation* LIFEJLAJJKO; // 0xD0
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AttackDamageType, ::System::String*>* CEIICBMFAKH; // 0xD8
	::Class_2_CC9EB486A8D01931* KBAEEBPDLMK; // 0xE0
	::UnityEngine::Transform* JOLDPJMOAMM; // 0xE8
	::UnityEngine::UI::Image* AMNPLNKPOJF; // 0xF0
	::UnityEngine::Transform* AMPCCBNAGLH; // 0xF8
	::UnityEngine::UI::Image* IHDDCCAIDIB; // 0x100
	::UnityEngine::UI::Image* HHPNBMDIIGO; // 0x108
	::Class_2_6CE592807426216E* KEPANBEOIFI; // 0x110
	::RPG::Client::PrefabLoadMeta* FFBLPAEAIJM; // 0x118
	::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293__ONBIND_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_3_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_3_ABE7CF9FA1B8CCA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_ABE7CF9FA1B8CCA3_OFFSET))(this);
	}

	::Class_2_CC9EB486A8D01931* Method_3_B51F0EDFD675DF68(::RPG::GameCore::SkillSPProgressType a1, ::UnityEngine::Transform* a2, ::RPG::GameCore::GameEntity* a3)
	{
		return ((::Class_2_CC9EB486A8D01931*(*)(::PVOID, ::RPG::GameCore::SkillSPProgressType, ::UnityEngine::Transform*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_B51F0EDFD675DF68_OFFSET))(this, a1, a2, a3);
	}

	::System::String* Method_3_A01F987742BD20DA(::RPG::GameCore::DamageTypeRow* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DamageTypeRow*))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_A01F987742BD20DA_OFFSET))(this, a1);
	}

	::System::Void Method_3_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_3_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_3_1659BCB6D1A9FC34()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_1659BCB6D1A9FC34_OFFSET))(this);
	}

	::System::Void Method_3_FA383E53DEC53851(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_FA383E53DEC53851_OFFSET))(this, a1);
	}

	::System::Void Method_3_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_3_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_3_B09E78EE7EE4F8FA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_B09E78EE7EE4F8FA_OFFSET))(this);
	}

	::System::Void Method_3_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Boolean Method_3_42C5BADE1C9EFC80()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_42C5BADE1C9EFC80_OFFSET))(this);
	}

	::System::Void Method_3_9094A96EEEB7AD9B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_9094A96EEEB7AD9B_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_42C5BADE1C9EFC80_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_42C5BADE1C9EFC80_1_OFFSET))(this);
	}

	::System::Void Method_3_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Void Method_3_B387E1AED8A8F880()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_B387E1AED8A8F880_OFFSET))(this);
	}

	::System::Void Method_3_927FAEA36AA4115E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_927FAEA36AA4115E_OFFSET))(this);
	}

	::System::Void Method_3_F6AE21AA4AB06AC6(::Class_1_05BD9C87E93CA0F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05BD9C87E93CA0F8*))((::PBYTE)hIl2Cpp + CLASS_3_437010CBFFA61293_METHOD_3_F6AE21AA4AB06AC6_OFFSET))(this, a1);
	}
};
