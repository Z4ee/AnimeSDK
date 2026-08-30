#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class UIBillboard; }
namespace System { template <typename T> class Comparison_1; }

namespace RPG::Client
{
	inline static constexpr unsigned int BillboardWayPointMutexManager___O_TypeDefinitionIndex = 60601;

	class BillboardWayPointMutexManager___O : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::RPG::Client::UIBillboard*>** StaticGet__0____CompareBillboardsByCameraDistance()
		{
			return (::System::Comparison_1<::RPG::Client::UIBillboard*>**)Il2CppClass::FromTypeDefinitionIndex(BillboardWayPointMutexManager___O_TypeDefinitionIndex)->GetStaticField(0x10080);
		}
	};
}
