#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA751020)
#define RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA751060)

namespace RPG::Client::MVVM::View
{
	inline static constexpr unsigned int LimaoNewsIssueSubmitWindow___c_TypeDefinitionIndex = 68452;

	class LimaoNewsIssueSubmitWindow___c : public ::System::Object
	{
	public:
		static ::RPG::Client::MVVM::View::LimaoNewsIssueSubmitWindow___c** StaticGet___9()
		{
			return (::RPG::Client::MVVM::View::LimaoNewsIssueSubmitWindow___c**)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsIssueSubmitWindow___c_TypeDefinitionIndex)->GetStaticField(0x1B900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_VIEW_LIMAONEWSISSUESUBMITWINDOW___C__CTOR_OFFSET))(this);
		}
	};
}
