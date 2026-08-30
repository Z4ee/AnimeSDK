#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Formatters { template <typename T> class IMessagePackFormatter_1; }

#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET UNITYSDK_OFFSET(0x1C2A7DB0)
#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C2A7E30)
#define RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2A7DA0)

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicationFormatterResolver_TypeDefinitionIndex = 36377;

	class ReplicationFormatterResolver : public ::System::Object
	{
	public:
		static ::MessagePack::IFormatterResolver** StaticGet_FMJPMFEDIJL()
		{
			return (::MessagePack::IFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(ReplicationFormatterResolver_TypeDefinitionIndex)->GetStaticField(0x24D50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER__CCTOR_OFFSET))();
		}

		static ::System::Void RegisterToGlobalResolver()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAMESHARE_REPLICATIONFORMATTERRESOLVER_REGISTERTOGLOBALRESOLVER_OFFSET))();
		}
	};
}
