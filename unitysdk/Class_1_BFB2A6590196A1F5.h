#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
#include "unitysdk/Struct_2_7CAA93E3FEB7B3D6.h"
#include "unitysdk/System/Object.h"

class Class_2_82A981B40431CD9C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BFB2A6590196A1F5_METHOD_1_321D5C5E5EFA0925_OFFSET UNITYSDK_OFFSET(0x15AAC130)
#define CLASS_1_BFB2A6590196A1F5_METHOD_1_706CA34E90885A4C_OFFSET UNITYSDK_OFFSET(0x15AAC570)
#define CLASS_1_BFB2A6590196A1F5_METHOD_1_82ED80D67B7B378D_OFFSET UNITYSDK_OFFSET(0x15AAC320)

inline static constexpr unsigned int Class_1_BFB2A6590196A1F5_TypeDefinitionIndex = 53942;

class Class_1_BFB2A6590196A1F5 : public ::System::Object
{
public:
	static ::System::String* Method_1_321D5C5E5EFA0925(::Class_2_82A981B40431CD9C* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::Class_2_82A981B40431CD9C*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BFB2A6590196A1F5_METHOD_1_321D5C5E5EFA0925_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_82ED80D67B7B378D(::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>* a1, ::RPG::GameCore::RtModifierPropertyType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>*, ::RPG::GameCore::RtModifierPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_BFB2A6590196A1F5_METHOD_1_82ED80D67B7B378D_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_706CA34E90885A4C(::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>* a1, ::RPG::GameCore::RtModifierPropertyType a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>*, ::RPG::GameCore::RtModifierPropertyType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BFB2A6590196A1F5_METHOD_1_706CA34E90885A4C_OFFSET))(a1, a2, a3);
	}
};
