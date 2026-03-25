#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ASSEMNPC_METHOD_1_92D59DB27A2254BC_OFFSET UNITYSDK_OFFSET(0x90D89A0)
#define RPG_CLIENT_ASSEMNPC_METHOD_1_9672A1E124B0978D_OFFSET UNITYSDK_OFFSET(0x90D87D0)
#define RPG_CLIENT_ASSEMNPC_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x90D8BB0)
#define RPG_CLIENT_ASSEMNPC_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x90D8B70)
#define RPG_CLIENT_ASSEMNPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x90D8A80)
#define RPG_CLIENT_ASSEMNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x90D8A40)
#define RPG_CLIENT_ASSEMNPC___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x90D8CB0)

namespace RPG::Client
{
	inline static constexpr unsigned int AssemNPC_TypeDefinitionIndex = 48619;

	class AssemNPC : public ::System::Object
	{
	public:
		::System::String* AssemNPCID; // 0x10
		::System::String* WorldOverride; // 0x18
		::System::String* Face; // 0x20
		::System::String* FaceMat; // 0x28
		::System::String* Body; // 0x30
		::System::String* BodyMat; // 0x38
		::System::String* Hair; // 0x40
		::System::String* HairMat; // 0x48
		::System::String* Item; // 0x50
		::System::String* ItemMat; // 0x58
		::Il2CppArray<::System::String*>* MatVariantKeys; // 0x60
		::System::Single AssemScore; // 0x68
		::System::Collections::Generic::List_1<::System::String*>* Variants; // 0x70
		::System::String* AnimatorPath; // 0x78
		::System::Int32 BodySizeInt; // 0x80
		::System::String* FreeStyleCharacterID; // 0x88
		::System::String* FreeStyleCharacterConfigPath; // 0x90

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_1_9672A1E124B0978D(::RPG::Client::AssemNPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::AssemNPC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_METHOD_1_9672A1E124B0978D_OFFSET))(this, a1);
		}

		::RPG::Client::AssemNPC* Method_1_92D59DB27A2254BC()
		{
			return ((::RPG::Client::AssemNPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_METHOD_1_92D59DB27A2254BC_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_TOSTRING_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ASSEMNPC___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}
