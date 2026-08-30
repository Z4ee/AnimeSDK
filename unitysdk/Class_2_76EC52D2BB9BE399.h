#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class CRPVCBackground; }
namespace RPG::Client { class SplitScreenVCControl; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CRPVirtualCamera; }

#define CLASS_2_76EC52D2BB9BE399_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A4D960)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_155EBEDB7DB8B929_OFFSET UNITYSDK_OFFSET(0x17A4DED0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_19844080C13BA28F_OFFSET UNITYSDK_OFFSET(0x17A4E0D0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0x17A4E3F0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_3FA1D91279A7F0C8_OFFSET UNITYSDK_OFFSET(0x17A4DFD0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_6FCD5ED083C67CF0_OFFSET UNITYSDK_OFFSET(0x17A4DE30)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_7A1C6BB09C31723A_OFFSET UNITYSDK_OFFSET(0x17A4D840)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_7DD84EAFF333A1E4_OFFSET UNITYSDK_OFFSET(0x17A4D910)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_7EAA8879197594BA_1_OFFSET UNITYSDK_OFFSET(0x17A4D400)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_7EAA8879197594BA_OFFSET UNITYSDK_OFFSET(0x17A4CF90)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x17A4E580)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_9F8F6511E8EF1235_OFFSET UNITYSDK_OFFSET(0x17A4CEE0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_B2C52ACF9D9B435B_OFFSET UNITYSDK_OFFSET(0x17A4BDD0)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_BA00D508D791624D_OFFSET UNITYSDK_OFFSET(0x17A4DD90)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_C3440650C26BC3A8_OFFSET UNITYSDK_OFFSET(0x17A4BD80)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_DB4D7D07EC5D0482_OFFSET UNITYSDK_OFFSET(0x17A4DD30)
#define CLASS_2_76EC52D2BB9BE399_METHOD_2_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0x17A4BE30)
#define CLASS_2_76EC52D2BB9BE399__CTOR_OFFSET UNITYSDK_OFFSET(0x17A4E650)

inline static constexpr unsigned int Class_2_76EC52D2BB9BE399_TypeDefinitionIndex = 69680;

class Class_2_76EC52D2BB9BE399 : public ::RPG::Client::BehaviorBase
{
public:
	::System::String* ALIHAFPMPOA; // 0x18
	::UnityEngine::Texture2D* IPFHEKOCABD; // 0x20
	::UnityEngine::Texture2D* POJMAKPIJHK; // 0x28
	::System::String* AGJDKFLBNLA; // 0x30
	::System::Nullable_1<::UnityEngine::Color> HOEFNNIJLLB; // 0x38
	::System::Nullable_1<::System::Single> IHINAPMNICE; // 0x4C
	::System::Nullable_1<::System::Single> JBHNCHNFGKO; // 0x54
	::System::Nullable_1<::UnityEngine::Vector2> KNDJODMHDIA; // 0x5C
	::System::Nullable_1<::System::Single> HBIPIGHGPFH; // 0x68
	::System::Nullable_1<::System::Single> JGFEBMPNHGE; // 0x70
	::System::Nullable_1<::UnityEngine::Vector2> HDNMPNPBOAA; // 0x78
	::System::Nullable_1<::System::Single> JFKBDNMFOFL; // 0x84
	::System::Nullable_1<::UnityEngine::Color> CDGOEKBKLAD; // 0x8C
	::System::Nullable_1<::System::Boolean> ADINFEHCJCE; // 0xA0
	::System::Boolean DDFBKOHOIOI; // 0xA2
	::System::Nullable_1<::System::Boolean> PNEBIBKJMCM; // 0xA3
	::System::Nullable_1<::UnityEngine::Vector2> BGJBONAALME; // 0xA8
	::UnityEngine::Vector2 DEAGFGEGGDJ; // 0xB4
	::System::Nullable_1<::UnityEngine::Vector2> DIACFBPMAJM; // 0xBC
	::UnityEngine::Vector2 ANAFLKMMEFJ; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399__CTOR_OFFSET))(this);
	}

	::RPG::Client::SplitScreenVCControl* Method_2_C3440650C26BC3A8()
	{
		return ((::RPG::Client::SplitScreenVCControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_C3440650C26BC3A8_OFFSET))(this);
	}

	::System::Void Method_2_B2C52ACF9D9B435B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_B2C52ACF9D9B435B_OFFSET))(this);
	}

	::System::Void Method_2_7A1C6BB09C31723A(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_7A1C6BB09C31723A_OFFSET))(this, a1);
	}

	::System::Void Method_2_7DD84EAFF333A1E4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_7DD84EAFF333A1E4_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_E2BCD1B56132A826()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_E2BCD1B56132A826_OFFSET))(this);
	}

	::System::Void Method_2_7EAA8879197594BA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_7EAA8879197594BA_OFFSET))(this);
	}

	::System::Void Method_2_7EAA8879197594BA_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_7EAA8879197594BA_1_OFFSET))(this);
	}

	::System::Void Method_2_BA00D508D791624D(::RPG::Client::CRPVCBackground* a1, ::UnityEngine::Rendering::CRPVirtualCamera* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::CRPVCBackground*, ::UnityEngine::Rendering::CRPVirtualCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_BA00D508D791624D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_6FCD5ED083C67CF0(::UnityEngine::Material* a1, ::UnityEngine::Color a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_6FCD5ED083C67CF0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_155EBEDB7DB8B929(::UnityEngine::Material* a1, ::System::String* a2, ::UnityEngine::Texture2D*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::String*, ::UnityEngine::Texture2D*&))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_155EBEDB7DB8B929_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3FA1D91279A7F0C8(::UnityEngine::Material* a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_3FA1D91279A7F0C8_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_9F8F6511E8EF1235()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_9F8F6511E8EF1235_OFFSET))(this);
	}

	::System::Void Method_2_19844080C13BA28F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_19844080C13BA28F_OFFSET))(this);
	}

	::System::Single Method_2_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_861970C5F2C21AB2_OFFSET))(this);
	}

	::System::Void Method_2_28EB11670A8E5A86()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_28EB11670A8E5A86_OFFSET))(this);
	}

	::UnityEngine::Material* Method_2_DB4D7D07EC5D0482(::UnityEngine::MeshRenderer* a1)
	{
		return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::MeshRenderer*))((::PBYTE)hIl2Cpp + CLASS_2_76EC52D2BB9BE399_METHOD_2_DB4D7D07EC5D0482_OFFSET))(this, a1);
	}
};
