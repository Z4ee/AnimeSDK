#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/OpenUIPageTaskBase_1.h"

namespace RPG::GameCore { class ShowWorldShop; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define CLASS_3_B30DA02A6C5C3D30_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14E8D010)
#define CLASS_3_B30DA02A6C5C3D30__CTOR_OFFSET UNITYSDK_OFFSET(0x14E8CFD0)
#define CLASS_3_B30DA02A6C5C3D30__ONPAGECONFIRMCLOSE_OFFSET UNITYSDK_OFFSET(0x14E8D1D0)

inline static constexpr unsigned int Class_3_B30DA02A6C5C3D30_TypeDefinitionIndex = 56084;

class Class_3_B30DA02A6C5C3D30 : public ::RPG::GameCore::OpenUIPageTaskBase_1<::RPG::GameCore::ShowWorldShop*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowWorldShop* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowWorldShop*))((::PBYTE)hIl2Cpp + CLASS_3_B30DA02A6C5C3D30__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B30DA02A6C5C3D30_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnPageConfirmClose(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_3_B30DA02A6C5C3D30__ONPAGECONFIRMCLOSE_OFFSET))(this, a1);
	}
};
