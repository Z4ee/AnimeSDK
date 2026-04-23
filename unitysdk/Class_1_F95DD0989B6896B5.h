#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelRankData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F95DD0989B6896B5_METHOD_1_002D39232CF0AC21_OFFSET UNITYSDK_OFFSET(0x12926170)
#define CLASS_1_F95DD0989B6896B5_METHOD_1_857E206864E65948_OFFSET UNITYSDK_OFFSET(0x12925FE0)
#define CLASS_1_F95DD0989B6896B5_METHOD_1_93C1CB5988E299E0_OFFSET UNITYSDK_OFFSET(0x129260F0)
#define CLASS_1_F95DD0989B6896B5__CTOR_OFFSET UNITYSDK_OFFSET(0x12925CE0)

inline static constexpr unsigned int Class_1_F95DD0989B6896B5_TypeDefinitionIndex = 58386;

class Class_1_F95DD0989B6896B5 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ChimeraDuelRankData*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F95DD0989B6896B5__CTOR_OFFSET))(this);
	}

	::RPG::Client::ChimeraDuelRankData* Method_1_857E206864E65948(::System::UInt32 a1)
	{
		return ((::RPG::Client::ChimeraDuelRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F95DD0989B6896B5_METHOD_1_857E206864E65948_OFFSET))(this, a1);
	}

	::RPG::Client::ChimeraDuelRankData* Method_1_93C1CB5988E299E0(::System::UInt32 a1)
	{
		return ((::RPG::Client::ChimeraDuelRankData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F95DD0989B6896B5_METHOD_1_93C1CB5988E299E0_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_002D39232CF0AC21()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + CLASS_1_F95DD0989B6896B5_METHOD_1_002D39232CF0AC21_OFFSET))();
	}
};
