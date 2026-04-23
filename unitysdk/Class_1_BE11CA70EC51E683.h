#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtModifierPropertyType.h"
#include "unitysdk/Struct_2_7CAA93E3FEB7B3D6.h"
#include "unitysdk/System/Object.h"

class Class_2_82A981B40431CD9C;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BE11CA70EC51E683_METHOD_1_CAB1B32EB984CFFB_OFFSET UNITYSDK_OFFSET(0x9520D40)
#define CLASS_1_BE11CA70EC51E683_METHOD_1_E1BD39F46EDB6766_OFFSET UNITYSDK_OFFSET(0x9520BB0)
#define CLASS_1_BE11CA70EC51E683_METHOD_1_F2FB91134C120794_OFFSET UNITYSDK_OFFSET(0x9521120)

inline static constexpr unsigned int Class_1_BE11CA70EC51E683_TypeDefinitionIndex = 49509;

class Class_1_BE11CA70EC51E683 : public ::System::Object
{
public:
	static ::System::String* Method_1_E1BD39F46EDB6766(::Class_2_82A981B40431CD9C* a1, ::System::String* a2)
	{
		return ((::System::String*(*)(::Class_2_82A981B40431CD9C*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE11CA70EC51E683_METHOD_1_E1BD39F46EDB6766_OFFSET))(a1, a2);
	}

	static ::RPG::GameCore::FixPoint Method_1_CAB1B32EB984CFFB(::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>* a1, ::RPG::GameCore::RtModifierPropertyType a2, ::RPG::GameCore::FixPoint a3)
	{
		return ((::RPG::GameCore::FixPoint(*)(::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>*, ::RPG::GameCore::RtModifierPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_BE11CA70EC51E683_METHOD_1_CAB1B32EB984CFFB_OFFSET))(a1, a2, a3);
	}

	static ::System::Int32 Method_1_F2FB91134C120794(::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>* a1, ::RPG::GameCore::RtModifierPropertyType a2, ::System::Int32 a3)
	{
		return ((::System::Int32(*)(::System::Collections::Generic::List_1<::Struct_2_7CAA93E3FEB7B3D6>*, ::RPG::GameCore::RtModifierPropertyType, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_BE11CA70EC51E683_METHOD_1_F2FB91134C120794_OFFSET))(a1, a2, a3);
	}
};
