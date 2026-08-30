#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED6312566761D69A.h"

namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleStarConfig; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define CLASS_2_A45573DF3CD75756_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x16887AC0)
#define CLASS_2_A45573DF3CD75756_METHOD_2_27378F13CCC86733_OFFSET UNITYSDK_OFFSET(0x16887940)
#define CLASS_2_A45573DF3CD75756__CTOR_OFFSET UNITYSDK_OFFSET(0x16887860)

inline static constexpr unsigned int Class_2_A45573DF3CD75756_TypeDefinitionIndex = 65195;

class Class_2_A45573DF3CD75756 : public ::Class_1_ED6312566761D69A
{
public:
	::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x20
	::RPG::Client::GridFightRoleStarConfig* GFBHILKDOEB; // 0x28

	::System::Void _ctor(::RPG::Client::GridFightRole* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + CLASS_2_A45573DF3CD75756__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_27378F13CCC86733(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_A45573DF3CD75756_METHOD_2_27378F13CCC86733_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A45573DF3CD75756_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}
};
