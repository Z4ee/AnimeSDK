#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6526EDA44F8A6866_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE83B3A0)
#define CLASS_1_6526EDA44F8A6866__CTOR_OFFSET UNITYSDK_OFFSET(0xE83B3F0)

inline static constexpr unsigned int Class_1_6526EDA44F8A6866_TypeDefinitionIndex = 80112;

class Class_1_6526EDA44F8A6866 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*>* GDEICGCKOAM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6526EDA44F8A6866__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6526EDA44F8A6866_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
