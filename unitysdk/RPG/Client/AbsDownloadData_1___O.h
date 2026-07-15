#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int AbsDownloadData_1___O_TypeDefinitionIndex = 56803;

	template <typename TIndex>
	class AbsDownloadData_1___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet__0___IsHexStr()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(AbsDownloadData_1___O_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
