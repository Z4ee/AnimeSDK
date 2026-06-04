#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPREPLACETVTEXTURE_METHOD_3_00A147880B452789_OFFSET UNITYSDK_OFFSET(0x19A951C0)
#define RPG_GAMECORE_PROPREPLACETVTEXTURE_METHOD_3_6FD20E8E07683532_OFFSET UNITYSDK_OFFSET(0x19A95040)
#define RPG_GAMECORE_PROPREPLACETVTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A95110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropReplaceTVTexture_TypeDefinitionIndex = 20849;

	class PropReplaceTVTexture : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* TextureKey; // 0x20
		::RPG::GameCore::DynamicString* TexturePath; // 0x28
		::System::String* NodeName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREPLACETVTEXTURE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_6FD20E8E07683532(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropReplaceTVTexture*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropReplaceTVTexture*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREPLACETVTEXTURE_METHOD_3_6FD20E8E07683532_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_00A147880B452789(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropReplaceTVTexture* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropReplaceTVTexture*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPREPLACETVTEXTURE_METHOD_3_00A147880B452789_OFFSET))(a1, a2);
		}
	};
}
