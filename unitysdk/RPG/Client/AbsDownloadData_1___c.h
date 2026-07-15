#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { template <typename T> class AbsDownloadData_1___c; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int AbsDownloadData_1___c_TypeDefinitionIndex = 56804;

	template <typename TIndex>
	class AbsDownloadData_1___c : public ::System::Object
	{
	public:
		static ::RPG::Client::AbsDownloadData_1___c<TIndex>** StaticGet___9()
		{
			return (::RPG::Client::AbsDownloadData_1___c<TIndex>**)Il2CppClass::FromTypeDefinitionIndex(AbsDownloadData_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::String*, ::RPG::Client::ByteHash16>** StaticGet___9__51_0()
		{
			return (::System::Func_2<::System::String*, ::RPG::Client::ByteHash16>**)Il2CppClass::FromTypeDefinitionIndex(AbsDownloadData_1___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
