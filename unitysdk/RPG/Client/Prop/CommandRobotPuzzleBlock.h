#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/CommandRobotPuzzleBlockType.h"
#include "unitysdk/Struct_2_9FD29C41345F95C8.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace UnityEngine { class Animator; }

#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_METHOD_5_3F07804D8892197E_1_OFFSET UNITYSDK_OFFSET(0xDC7E790)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_METHOD_5_3F07804D8892197E_OFFSET UNITYSDK_OFFSET(0xDC7EB60)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_METHOD_5_66D1CC6071325C2F_OFFSET UNITYSDK_OFFSET(0xDC7E850)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_METHOD_5_C714235EE2C7684D_OFFSET UNITYSDK_OFFSET(0xDC7ED70)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKENTER_OFFSET UNITYSDK_OFFSET(0xDC7E380)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKEXIT_OFFSET UNITYSDK_OFFSET(0xDC7E920)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKINIT_OFFSET UNITYSDK_OFFSET(0xDC7EC30)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKRESET_OFFSET UNITYSDK_OFFSET(0xDC7EA20)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0xDC7EDF0)
#define RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0xDC7EDE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int CommandRobotPuzzleBlock_TypeDefinitionIndex = 78509;

	class CommandRobotPuzzleBlock : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Int32* StaticGet_NOGGBMBJEJB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBlock_TypeDefinitionIndex)->GetStaticField(0xC2F0);
		}
		static ::System::Int32* StaticGet_KOIADNBGOEE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBlock_TypeDefinitionIndex)->GetStaticField(0xC2F4);
		}
		static ::System::Int32* StaticGet_NIJILEALPKE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBlock_TypeDefinitionIndex)->GetStaticField(0xC2F8);
		}
		static ::System::Int32* StaticGet_GALMJPMAIAD()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBlock_TypeDefinitionIndex)->GetStaticField(0xC2FC);
		}
		static ::System::Int32* StaticGet_DCJAHAPDJOH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBlock_TypeDefinitionIndex)->GetStaticField(0xC300);
		}
		static ::System::Int32* StaticGet_BMBMCGOHFNC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CommandRobotPuzzleBlock_TypeDefinitionIndex)->GetStaticField(0xC304);
		}
		// static const ::System::String* IIABNDIFJOI; // 0x0
		// static const ::System::String* MINEFEJMIOP; // 0x0
		// static const ::System::String* KFBCFOPJENN; // 0x0
		// static const ::System::String* HBAMHJGOMBB; // 0x0
		::UnityEngine::Vector2Int Position; // 0x18
		::RPG::Client::Prop::CommandRobotPuzzleBlockType BlockType; // 0x20
		::UnityEngine::Animator* KELPNPDJHEF; // 0x28
		::UnityEngine::Animator* HCAGKLHBNOL; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK__CCTOR_OFFSET))();
		}

		::System::Void OnBlockEnter(::Struct_2_9FD29C41345F95C8 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_9FD29C41345F95C8))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKENTER_OFFSET))(this, a1);
		}

		::System::Void OnBlockExit(::Struct_2_9FD29C41345F95C8 a1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_9FD29C41345F95C8))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKEXIT_OFFSET))(this, a1);
		}

		::System::Void OnBlockReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKRESET_OFFSET))(this);
		}

		::System::Void OnBlockInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_ONBLOCKINIT_OFFSET))(this);
		}

		::System::Void Method_5_3F07804D8892197E(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_METHOD_5_3F07804D8892197E_OFFSET))(this, a1);
		}

		::System::Void Method_5_3F07804D8892197E_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_METHOD_5_3F07804D8892197E_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_66D1CC6071325C2F(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_METHOD_5_66D1CC6071325C2F_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Animator* Method_5_C714235EE2C7684D()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_COMMANDROBOTPUZZLEBLOCK_METHOD_5_C714235EE2C7684D_OFFSET))(this);
		}
	};
}
