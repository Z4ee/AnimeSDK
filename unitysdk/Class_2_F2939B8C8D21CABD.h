#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_35D50070BC469EAB.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace MoleMole::Config { class InteractEntryMode_ClueView; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F2939B8C8D21CABD_METHOD_2_1C92751553E32AE6_OFFSET UNITYSDK_OFFSET(0x1355DE20)
#define CLASS_2_F2939B8C8D21CABD_METHOD_2_825F7C05602A972C_OFFSET UNITYSDK_OFFSET(0x1355D850)
#define CLASS_2_F2939B8C8D21CABD_METHOD_2_CB210D3CDDB106B2_OFFSET UNITYSDK_OFFSET(0x1355DDD0)
#define CLASS_2_F2939B8C8D21CABD__CTOR_OFFSET UNITYSDK_OFFSET(0x1355D7C0)

inline static constexpr unsigned int Class_2_F2939B8C8D21CABD_TypeDefinitionIndex = 39126;

class Class_2_F2939B8C8D21CABD : public ::Class_1_35D50070BC469EAB
{
public:
	// static const ::System::String* Field_2_1; // 0x0
	::MoleMole::Config::InteractEntryMode_ClueView* Field_2_0; // 0x50

	::System::Void _ctor(::MoleMole::Config::InteractEntry* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + CLASS_2_F2939B8C8D21CABD__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_825F7C05602A972C(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_F2939B8C8D21CABD_METHOD_2_825F7C05602A972C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CB210D3CDDB106B2(::System::Collections::Generic::List_1<::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_2_F2939B8C8D21CABD_METHOD_2_CB210D3CDDB106B2_OFFSET))(this, a1);
	}

	::System::Void Method_2_1C92751553E32AE6(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_F2939B8C8D21CABD_METHOD_2_1C92751553E32AE6_OFFSET))(this, a1, a2);
	}
};
