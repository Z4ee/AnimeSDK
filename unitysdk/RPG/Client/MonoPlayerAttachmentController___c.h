#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_506;
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__AWAKE_B__3_0_OFFSET UNITYSDK_OFFSET(0x9D279E0)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D27990)
#define RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x9D279D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoPlayerAttachmentController___c_TypeDefinitionIndex = 48723;

	class MonoPlayerAttachmentController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Class_0_16E4307DCC419505_506*>** StaticGet___9__3_0()
		{
			return (::System::Comparison_1<::Class_0_16E4307DCC419505_506*>**)Il2CppClass::FromTypeDefinitionIndex(MonoPlayerAttachmentController___c_TypeDefinitionIndex)->GetStaticField(0x409F0);
		}
		static ::RPG::Client::MonoPlayerAttachmentController___c** StaticGet___9()
		{
			return (::RPG::Client::MonoPlayerAttachmentController___c**)Il2CppClass::FromTypeDefinitionIndex(MonoPlayerAttachmentController___c_TypeDefinitionIndex)->GetStaticField(0x409F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _Awake_b__3_0(::Class_0_16E4307DCC419505_506* a, ::Class_0_16E4307DCC419505_506* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_0_16E4307DCC419505_506*, ::Class_0_16E4307DCC419505_506*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPLAYERATTACHMENTCONTROLLER___C__AWAKE_B__3_0_OFFSET))(this, a, b);
		}
	};
}
