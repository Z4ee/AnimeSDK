#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_REMOVESTREAMINGSOURCE_METHOD_3_C87C8628700BEF07_OFFSET UNITYSDK_OFFSET(0x17599D70)
#define RPG_GAMECORE_REMOVESTREAMINGSOURCE_METHOD_3_CE568906F0E65156_OFFSET UNITYSDK_OFFSET(0x17599CF0)
#define RPG_GAMECORE_REMOVESTREAMINGSOURCE__CTOR_OFFSET UNITYSDK_OFFSET(0x17599D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveStreamingSource_TypeDefinitionIndex = 19541;

	class RemoveStreamingSource : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StreamingSource; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESTREAMINGSOURCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_CE568906F0E65156(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveStreamingSource*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveStreamingSource*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESTREAMINGSOURCE_METHOD_3_CE568906F0E65156_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C87C8628700BEF07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveStreamingSource* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveStreamingSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESTREAMINGSOURCE_METHOD_3_C87C8628700BEF07_OFFSET))(a1, a2);
		}
	};
}
