#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_GROUPINITMEMBERENTITYTRANSFORM_METHOD_3_3FBF32B32B8D7395_OFFSET UNITYSDK_OFFSET(0x1D170770)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYTRANSFORM_METHOD_3_77BC1A727545DAB8_OFFSET UNITYSDK_OFFSET(0x1D1707B0)
#define RPG_GAMECORE_GROUPINITMEMBERENTITYTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1707A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupInitMemberEntityTransform_TypeDefinitionIndex = 20497;

	class GroupInitMemberEntityTransform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 EntityInstanceID; // 0x18
		::RPG::MVector3 InitPosition; // 0x1C
		::RPG::MVector3 InitRotation; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3FBF32B32B8D7395(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupInitMemberEntityTransform*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupInitMemberEntityTransform*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYTRANSFORM_METHOD_3_3FBF32B32B8D7395_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_77BC1A727545DAB8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GroupInitMemberEntityTransform* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GroupInitMemberEntityTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPINITMEMBERENTITYTRANSFORM_METHOD_3_77BC1A727545DAB8_OFFSET))(a1, a2);
		}
	};
}
