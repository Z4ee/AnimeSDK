#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class TitanAtlasGroup; }
namespace RPG::Client { class TitanAtlasInfo; }
namespace RPG::Client { class TitanAtlasVoicePool; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_73458DB7D9EE7043_METHOD_1_45F2383E898C8A5A_OFFSET UNITYSDK_OFFSET(0x115B6F90)
#define CLASS_1_73458DB7D9EE7043_METHOD_1_5D3004694C8CA3A7_OFFSET UNITYSDK_OFFSET(0x115B7AD0)
#define CLASS_1_73458DB7D9EE7043_METHOD_1_C7CC0B3C9A1F2A2B_OFFSET UNITYSDK_OFFSET(0x115B7630)
#define CLASS_1_73458DB7D9EE7043_METHOD_1_E343A1204BDEA5AC_OFFSET UNITYSDK_OFFSET(0x115B6D00)
#define CLASS_1_73458DB7D9EE7043__CTOR_OFFSET UNITYSDK_OFFSET(0x115B7EB0)

inline static constexpr unsigned int Class_1_73458DB7D9EE7043_TypeDefinitionIndex = 55625;

class Class_1_73458DB7D9EE7043 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_73458DB7D9EE7043__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasGroup*>* Method_1_E343A1204BDEA5AC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasGroup*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_73458DB7D9EE7043_METHOD_1_E343A1204BDEA5AC_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>* Method_1_45F2383E898C8A5A(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73458DB7D9EE7043_METHOD_1_45F2383E898C8A5A_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*>* Method_1_C7CC0B3C9A1F2A2B(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>* a1)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::TitanAtlasInfo*>*>*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasInfo*>*))((::PBYTE)hIl2Cpp + CLASS_1_73458DB7D9EE7043_METHOD_1_C7CC0B3C9A1F2A2B_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasVoicePool*>* Method_1_5D3004694C8CA3A7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::TitanAtlasVoicePool*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_73458DB7D9EE7043_METHOD_1_5D3004694C8CA3A7_OFFSET))();
	}
};
