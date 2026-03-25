#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_COMPLEXSKILLAISOURCE_METHOD_2_C9DE6815EF87F921_OFFSET UNITYSDK_OFFSET(0x17124790)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCE_METHOD_2_F986F3B63223080A_OFFSET UNITYSDK_OFFSET(0x17121CD0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171247F0)
#define RPG_GAMECORE_COMPLEXSKILLAISOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17121E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComplexSkillAISource_TypeDefinitionIndex = 14215;

	class ComplexSkillAISource : public ::RPG::GameCore::JsonConfig
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISource*>*>** StaticGet__FromBinary_ComplexSkillAISource_ImplDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Func_2<::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISource*>*>**)Il2CppClass::FromTypeDefinitionIndex(ComplexSkillAISource_TypeDefinitionIndex)->GetStaticField(0x28A90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCE__CCTOR_OFFSET))();
		}

		static ::System::Void Method_2_F986F3B63223080A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCE_METHOD_2_F986F3B63223080A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_C9DE6815EF87F921(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ComplexSkillAISource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ComplexSkillAISource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMPLEXSKILLAISOURCE_METHOD_2_C9DE6815EF87F921_OFFSET))(a1, a2);
		}
	};
}
