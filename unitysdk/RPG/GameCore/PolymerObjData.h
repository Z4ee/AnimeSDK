#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StagePrefabInfo; }
namespace System { class String; }

#define RPG_GAMECORE_POLYMEROBJDATA_METHOD_2_47FB19154B7D3799_OFFSET UNITYSDK_OFFSET(0x18C38A60)
#define RPG_GAMECORE_POLYMEROBJDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x18C38C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PolymerObjData_TypeDefinitionIndex = 18122;

	class PolymerObjData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StagePrefabInfo* PrefabInfo; // 0x10
		::System::Int32 RenderStubIndex; // 0x18
		::System::String* Chap; // 0x20
		::System::String* Name; // 0x28
		::System::String* PolymerPath; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POLYMEROBJDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_47FB19154B7D3799(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PolymerObjData*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PolymerObjData*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_POLYMEROBJDATA_METHOD_2_47FB19154B7D3799_OFFSET))(a1, a2);
		}
	};
}
