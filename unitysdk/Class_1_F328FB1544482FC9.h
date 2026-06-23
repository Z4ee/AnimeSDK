#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BubbleSpeakerPair.h"
#include "unitysdk/Struct_2_7BD06DA7B946DCA5.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F328FB1544482FC9_METHOD_1_0D3CEA11284B35A1_OFFSET UNITYSDK_OFFSET(0x143CF4F0)
#define CLASS_1_F328FB1544482FC9_METHOD_1_9C78C95F88680846_OFFSET UNITYSDK_OFFSET(0x143CF3C0)
#define CLASS_1_F328FB1544482FC9_METHOD_1_EBDBEA85BF508E50_OFFSET UNITYSDK_OFFSET(0x143CF280)
#define CLASS_1_F328FB1544482FC9__CTOR_1_OFFSET UNITYSDK_OFFSET(0x143CF070)
#define CLASS_1_F328FB1544482FC9__CTOR_OFFSET UNITYSDK_OFFSET(0x143CEE80)

inline static constexpr unsigned int Class_1_F328FB1544482FC9_TypeDefinitionIndex = 52746;

class Class_1_F328FB1544482FC9 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_F328FB1544482FC9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void _ctor_1(::System::Int32 a1, ::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::BubbleSpeakerPair>*))((::PBYTE)hIl2Cpp + CLASS_1_F328FB1544482FC9__CTOR_1_OFFSET))(this, a1, a2);
	}

	::Struct_2_7BD06DA7B946DCA5 Method_1_EBDBEA85BF508E50(::System::String* a1)
	{
		return ((::Struct_2_7BD06DA7B946DCA5(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F328FB1544482FC9_METHOD_1_EBDBEA85BF508E50_OFFSET))(this, a1);
	}

	::System::Collections::Generic::IReadOnlyList_1<::Struct_2_7BD06DA7B946DCA5>* Method_1_9C78C95F88680846()
	{
		return ((::System::Collections::Generic::IReadOnlyList_1<::Struct_2_7BD06DA7B946DCA5>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F328FB1544482FC9_METHOD_1_9C78C95F88680846_OFFSET))(this);
	}

	::Struct_2_7BD06DA7B946DCA5 Method_1_0D3CEA11284B35A1(::System::Int32 a1)
	{
		return ((::Struct_2_7BD06DA7B946DCA5(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F328FB1544482FC9_METHOD_1_0D3CEA11284B35A1_OFFSET))(this, a1);
	}
};
