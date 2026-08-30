#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_34917908B7833130.h"

namespace RPG::Client { class MonoInControlButton; }
namespace RPG::GameCore { class LevelDataComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_BA9298C30E267E70_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x18A71E30)
#define CLASS_2_BA9298C30E267E70_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x18A71E50)
#define CLASS_2_BA9298C30E267E70_METHOD_2_1293CB739F1151A1_OFFSET UNITYSDK_OFFSET(0x18A72050)
#define CLASS_2_BA9298C30E267E70_METHOD_2_2864BC30D852FC69_OFFSET UNITYSDK_OFFSET(0x18A71E90)
#define CLASS_2_BA9298C30E267E70_METHOD_2_3F5DC960A2A68BBD_OFFSET UNITYSDK_OFFSET(0x18A72270)
#define CLASS_2_BA9298C30E267E70_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x18A721B0)
#define CLASS_2_BA9298C30E267E70_METHOD_2_C5F2E178DAEB1793_OFFSET UNITYSDK_OFFSET(0x18A71F40)
#define CLASS_2_BA9298C30E267E70_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x18A71E40)
#define CLASS_2_BA9298C30E267E70__CTOR_OFFSET UNITYSDK_OFFSET(0x18A72800)
#define CLASS_2_BA9298C30E267E70__ONBIND_OFFSET UNITYSDK_OFFSET(0x18A71D70)

inline static constexpr unsigned int Class_2_BA9298C30E267E70_TypeDefinitionIndex = 72286;

class Class_2_BA9298C30E267E70 : public ::Class_1_34917908B7833130
{
public:
	// static const ::System::String* DJCBDJMACFH; // 0x0
	// static const ::System::String* DFAIPLJPCCL; // 0x0
	::RPG::Client::MonoInControlButton* OKPAHCBDGKF; // 0x60
	::RPG::GameCore::LevelDataComponent* OOGADIKBBBA; // 0x68
	::UnityEngine::UI::Text* GEPFFDDHPAI; // 0x70
	::UnityEngine::UI::Button* PFBLCICMBBK; // 0x78
	::System::Int32 _Index_k__BackingField; // 0x80
	::System::Boolean AKBPNMEFGAO; // 0x84

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA9298C30E267E70__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA9298C30E267E70__ONBIND_OFFSET))(this);
	}

	::System::Int32 get_Index()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA9298C30E267E70_GET_INDEX_OFFSET))(this);
	}

	::System::Void set_Index(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_BA9298C30E267E70_SET_INDEX_OFFSET))(this, a1);
	}

	::UnityEngine::Transform* get_Trans()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA9298C30E267E70_GET_TRANS_OFFSET))(this);
	}

	::System::Void Method_2_2864BC30D852FC69(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_BA9298C30E267E70_METHOD_2_2864BC30D852FC69_OFFSET))(this, a1);
	}

	::System::Void Method_2_C5F2E178DAEB1793()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA9298C30E267E70_METHOD_2_C5F2E178DAEB1793_OFFSET))(this);
	}

	::System::Void Method_2_1293CB739F1151A1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA9298C30E267E70_METHOD_2_1293CB739F1151A1_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA9298C30E267E70_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_3F5DC960A2A68BBD(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BA9298C30E267E70_METHOD_2_3F5DC960A2A68BBD_OFFSET))(this, a1);
	}
};
