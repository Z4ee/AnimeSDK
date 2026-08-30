#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"
#include "unitysdk/Class_2_49DD3E60D823A726_DiffState.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_49DD3E60D823A726_GET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x18E20EA0)
#define CLASS_2_49DD3E60D823A726_METHOD_2_092CD57850778EFC_OFFSET UNITYSDK_OFFSET(0x18E20DC0)
#define CLASS_2_49DD3E60D823A726_METHOD_2_14045882BC5C6CA9_OFFSET UNITYSDK_OFFSET(0x18E207A0)
#define CLASS_2_49DD3E60D823A726_METHOD_2_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x18E20C30)
#define CLASS_2_49DD3E60D823A726_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18E20B80)
#define CLASS_2_49DD3E60D823A726_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x18E20900)
#define CLASS_2_49DD3E60D823A726_METHOD_2_5388312B490900A3_OFFSET UNITYSDK_OFFSET(0x18E207F0)
#define CLASS_2_49DD3E60D823A726_METHOD_2_8688348781421DAF_OFFSET UNITYSDK_OFFSET(0x18E20530)
#define CLASS_2_49DD3E60D823A726_METHOD_2_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x18E20970)
#define CLASS_2_49DD3E60D823A726_METHOD_2_AA2D3E889C8A52CA_OFFSET UNITYSDK_OFFSET(0x18E20D70)
#define CLASS_2_49DD3E60D823A726_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18E20740)
#define CLASS_2_49DD3E60D823A726_SET_ISDISABLED_OFFSET UNITYSDK_OFFSET(0x18E20EB0)
#define CLASS_2_49DD3E60D823A726__CTOR_OFFSET UNITYSDK_OFFSET(0x18E20EC0)
#define CLASS_2_49DD3E60D823A726__ONBIND_OFFSET UNITYSDK_OFFSET(0x18E20440)
#define CLASS_2_49DD3E60D823A726__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18E20D20)
#define CLASS_2_49DD3E60D823A726__ONTICK_OFFSET UNITYSDK_OFFSET(0x18E20BD0)

inline static constexpr unsigned int Class_2_49DD3E60D823A726_TypeDefinitionIndex = 72082;

class Class_2_49DD3E60D823A726 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::Single FIBPFFLOLFE; // 0x0
	// static const ::System::String* OHHFEDFJJNO; // 0x0
	// static const ::System::String* MLIGEPPKHNN; // 0x0
	::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
	::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
	::UnityEngine::UI::Text* CPCCPIKCBAP; // 0x70
	::UnityEngine::Transform* ILEBMCNOKBC; // 0x78
	::UnityEngine::UI::Image* HPCAJDKDMEI; // 0x80
	::System::Action_1<::System::UInt32>* APCDJBLBEAF; // 0x88
	::System::Int32 DFOMMCJLMMO; // 0x90
	::Class_2_49DD3E60D823A726_DiffState IBPABMILPAC; // 0x94
	::System::Single HIIGOGNOKGD; // 0x98
	::System::Boolean _IsDisabled_k__BackingField; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8688348781421DAF(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::System::Action_1<::System::UInt32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_8688348781421DAF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5388312B490900A3(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_5388312B490900A3_OFFSET))(this, a1);
	}

	::System::Void Method_2_97D83E4CB3B11935()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_97D83E4CB3B11935_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726__ONTICK_OFFSET))(this, a1);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726__ONDISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_25CD86BF8626C8D9(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_25CD86BF8626C8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_14045882BC5C6CA9(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_14045882BC5C6CA9_OFFSET))(this, a1);
	}

	::System::Void Method_2_092CD57850778EFC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_092CD57850778EFC_OFFSET))(this);
	}

	::System::UInt32 Method_2_AA2D3E889C8A52CA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_METHOD_2_AA2D3E889C8A52CA_OFFSET))(this);
	}

	::System::Boolean get_IsDisabled()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_GET_ISDISABLED_OFFSET))(this);
	}

	::System::Void set_IsDisabled(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_49DD3E60D823A726_SET_ISDISABLED_OFFSET))(this, a1);
	}
};
