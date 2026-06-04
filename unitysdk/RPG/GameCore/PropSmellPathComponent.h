#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropTagComponent.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SmellPathEdge; }
namespace System { class String; }

#define RPG_GAMECORE_PROPSMELLPATHCOMPONENT_METHOD_3_04614BF7AAC5D207_OFFSET UNITYSDK_OFFSET(0x19A9A4F0)
#define RPG_GAMECORE_PROPSMELLPATHCOMPONENT_METHOD_3_48A00DC3834DACA2_OFFSET UNITYSDK_OFFSET(0x19A9A590)
#define RPG_GAMECORE_PROPSMELLPATHCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9A560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSmellPathComponent_TypeDefinitionIndex = 16704;

	class PropSmellPathComponent : public ::RPG::GameCore::PropTagComponent
	{
	public:
		::Il2CppArray<::RPG::MVector3>* GraphNodes; // 0x18
		::Il2CppArray<::RPG::GameCore::SmellPathEdge*>* GraphEdges; // 0x20
		::System::String* SmellCurvePrefabPath; // 0x28
		::System::String* CornerSmellCurvePrefabPath; // 0x30
		::RPG::MVector3 SmellPathEndPos; // 0x38
		::System::Single SmellControlNodeMaxAngle; // 0x44
		::System::Single StartSmellLength; // 0x48
		::System::Single EndSmellLength; // 0x4C
		::System::Single SmellGenLength; // 0x50
		::System::Single SmellGenGap; // 0x54
		::System::Single ControlNodeGenLengthRate; // 0x58
		::System::Single AssistantNodeSmellGenGap; // 0x5C
		::RPG::MVector3 SmellControlPointNoise; // 0x60
		::System::Single T; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSMELLPATHCOMPONENT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_04614BF7AAC5D207(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSmellPathComponent*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSmellPathComponent*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSMELLPATHCOMPONENT_METHOD_3_04614BF7AAC5D207_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_48A00DC3834DACA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropSmellPathComponent* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropSmellPathComponent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSMELLPATHCOMPONENT_METHOD_3_48A00DC3834DACA2_OFFSET))(a1, a2);
		}
	};
}
