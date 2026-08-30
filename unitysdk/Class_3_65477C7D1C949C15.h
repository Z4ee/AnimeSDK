#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

namespace RPG::GameCore { class OpenCocoon; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_65477C7D1C949C15_METHOD_3_3337B4DA0CB80D20_OFFSET UNITYSDK_OFFSET(0x16404AC0)
#define CLASS_3_65477C7D1C949C15_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16404050)
#define CLASS_3_65477C7D1C949C15__CTOR_OFFSET UNITYSDK_OFFSET(0x16404000)
#define CLASS_3_65477C7D1C949C15__ONPAGECANCELCLOSE_OFFSET UNITYSDK_OFFSET(0x16404C80)
#define CLASS_3_65477C7D1C949C15__ONPAGECONFIRMCLOSE_OFFSET UNITYSDK_OFFSET(0x16404B90)

inline static constexpr unsigned int Class_3_65477C7D1C949C15_TypeDefinitionIndex = 58388;

class Class_3_65477C7D1C949C15 : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::OpenCocoon*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenCocoon* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenCocoon*))((::PBYTE)hIl2Cpp + CLASS_3_65477C7D1C949C15__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65477C7D1C949C15_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_3_3337B4DA0CB80D20(::RPG::GameCore::PropComponent* a1, ::System::UInt32& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::PropComponent*, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_3_65477C7D1C949C15_METHOD_3_3337B4DA0CB80D20_OFFSET))(this, a1, a2);
	}

	::System::Void _OnPageConfirmClose(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_65477C7D1C949C15__ONPAGECONFIRMCLOSE_OFFSET))(this, a1);
	}

	::System::Void _OnPageCancelClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_65477C7D1C949C15__ONPAGECANCELCLOSE_OFFSET))(this);
	}
};
