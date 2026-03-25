#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
#include "unitysdk/System/Object.h"

class Class_1_3F2088DC1442FBF8;
class Class_1_3F2088DC1442FBF8_1;
class Class_1_DF590D5F0955A377_Class_3_11CBDCA989A0D873;
template <typename T1, typename T2> class Class_1_DF590D5F0955A377_TypedPacketHandler_2;

inline static constexpr unsigned int Class_1_DF590D5F0955A377_TypedHandlerInfo_2_TypeDefinitionIndex = 28735;

template <typename TReq, typename TRsp>
class Class_1_DF590D5F0955A377_TypedHandlerInfo_2 : public ::System::Object
{
public:
	::Class_1_DF590D5F0955A377_TypedPacketHandler_2<TReq, TRsp>* _PacketHandler; // 0x0
	::System::UInt32 _RspMsgID_k__BackingField; // 0x0
};
