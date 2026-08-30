#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_406;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class String; }

#define CLASS_1_16301709DD0B0FD3_METHOD_1_85F8131A93F00103_OFFSET UNITYSDK_OFFSET(0x15CE9A10)
#define CLASS_1_16301709DD0B0FD3_METHOD_1_91124137C348069A_OFFSET UNITYSDK_OFFSET(0x15CE9800)

inline static constexpr unsigned int Class_1_16301709DD0B0FD3_TypeDefinitionIndex = 50304;

class Class_1_16301709DD0B0FD3 : public ::System::Object
{
public:
	static ::R3::Observable_1<::System::Boolean>* Method_1_91124137C348069A(::R3::Observable_1<::RPG::Client::TextID>* a1)
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::R3::Observable_1<::RPG::Client::TextID>*))((::PBYTE)hIl2Cpp + CLASS_1_16301709DD0B0FD3_METHOD_1_91124137C348069A_OFFSET))(a1);
	}

	static ::R3::Observable_1<::System::Boolean>* Method_1_85F8131A93F00103(::R3::Observable_1<::System::Int32>* a1)
	{
		return ((::R3::Observable_1<::System::Boolean>*(*)(::R3::Observable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_16301709DD0B0FD3_METHOD_1_85F8131A93F00103_OFFSET))(a1);
	}
};
