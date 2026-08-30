#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client::NavMap { class ICartography; }
namespace RPG::Client::NavMap { class MappingInfoNode; }
namespace RPG::Client::NavMap { class SubNavMapData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_B5422831A06F51FE_METHOD_1_60163F28EB8BFD25_OFFSET UNITYSDK_OFFSET(0x161801E0)
#define CLASS_1_B5422831A06F51FE_METHOD_1_C237F448E0A876F0_OFFSET UNITYSDK_OFFSET(0x1617E0F0)
#define CLASS_1_B5422831A06F51FE_METHOD_1_C660C14550AEB654_OFFSET UNITYSDK_OFFSET(0x16180310)
#define CLASS_1_B5422831A06F51FE_METHOD_1_CEEDE261651A090D_OFFSET UNITYSDK_OFFSET(0x1617F980)
#define CLASS_1_B5422831A06F51FE_METHOD_1_FE98121E1A92B697_OFFSET UNITYSDK_OFFSET(0x1617F010)

inline static constexpr unsigned int Class_1_B5422831A06F51FE_TypeDefinitionIndex = 66226;

class Class_1_B5422831A06F51FE : public ::System::Object
{
public:
	static ::System::Boolean Method_1_C237F448E0A876F0(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B5422831A06F51FE_METHOD_1_C237F448E0A876F0_OFFSET))(a1);
	}

	static ::System::UInt32 Method_1_60163F28EB8BFD25(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a4, ::UnityEngine::Vector3 a5)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B5422831A06F51FE_METHOD_1_60163F28EB8BFD25_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::UnityEngine::Vector3 Method_1_CEEDE261651A090D(::RPG::Client::NavMap::SubNavMapData* a1, ::System::UInt32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::RPG::Client::NavMap::SubNavMapData*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B5422831A06F51FE_METHOD_1_CEEDE261651A090D_OFFSET))(a1, a2);
	}

	static ::System::Single Method_1_C660C14550AEB654(::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>* a1, ::UnityEngine::Vector3 a2)
	{
		return ((::System::Single(*)(::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B5422831A06F51FE_METHOD_1_C660C14550AEB654_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FE98121E1A92B697(::RPG::Client::NavMap::ICartography* a1, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*& a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::RPG::Client::NavMap::ICartography*, ::System::Collections::Generic::List_1<::RPG::Client::NavMap::MappingInfoNode*>*&, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B5422831A06F51FE_METHOD_1_FE98121E1A92B697_OFFSET))(a1, a2, a3);
	}
};
