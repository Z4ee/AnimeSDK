#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MESHPARTIDMASK_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xA886320)
#define RPG_CLIENT_MESHPARTIDMASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA8863D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MeshPartIDMask_TypeDefinitionIndex = 64293;

	class MeshPartIDMask : public ::System::Object
	{
	public:
		::System::Boolean Part1; // 0x10
		::System::Boolean Part2; // 0x11
		::System::Boolean Part3; // 0x12
		::System::Boolean Part4; // 0x13
		::System::Boolean Part5; // 0x14
		::System::Boolean Part6; // 0x15
		::System::Boolean Part7; // 0x16
		::System::Boolean Part8; // 0x17
		::System::Int32 ShowPartID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHPARTIDMASK__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESHPARTIDMASK_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}
	};
}
