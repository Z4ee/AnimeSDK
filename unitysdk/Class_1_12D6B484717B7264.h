#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_6D00CC7200247FB9;
namespace RPG::GameCore { class SpecialAvatarRow; }

#define CLASS_1_12D6B484717B7264_METHOD_1_DAABD3495B550490_OFFSET UNITYSDK_OFFSET(0x907FDE0)
#define CLASS_1_12D6B484717B7264__CTOR_OFFSET UNITYSDK_OFFSET(0x907FEB0)

inline static constexpr unsigned int Class_1_12D6B484717B7264_TypeDefinitionIndex = 57874;

class Class_1_12D6B484717B7264 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_12D6B484717B7264__CTOR_OFFSET))(this);
	}

	::Class_1_6D00CC7200247FB9* Method_1_DAABD3495B550490(::RPG::GameCore::SpecialAvatarRow* a1)
	{
		return ((::Class_1_6D00CC7200247FB9*(*)(::PVOID, ::RPG::GameCore::SpecialAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_12D6B484717B7264_METHOD_1_DAABD3495B550490_OFFSET))(this, a1);
	}
};
